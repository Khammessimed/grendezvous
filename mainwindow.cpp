#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>
#include <QDebug>
#include <QIntValidator>
#include <QSqlQuery>
#include <QSqlError>
#include <QTime>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Gemployer)
    , m_editMode(false)
{
    ui->setupUi(this);

    ui->lineEdit->setValidator(new QIntValidator(0, 99999999, this));

    ui->comboBox_tri->addItem("ID", "ID");
    ui->comboBox_tri->addItem("Client", "CLIENT");
    ui->comboBox_tri->addItem("Heure", "HEURE");
    ui->comboBox_tri->addItem("Date", "DATEE");
    ui->comboBox_tri->addItem("Rôle", "ROLE");
    ui->comboBox_tri->addItem("Statut", "STATUT");

    ui->lineEdit_recherche->setPlaceholderText("Rechercher...");

    ui->radioSortAsc_5->setChecked(true);

    // <-- MODIFICATION AJOUTÉE -->
    // Charge les clients depuis la table CLIENTE
    loadClientComboBox();

    refreshTable();
    clearFields();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setFormReadOnly(bool readOnly)
{
    ui->comboBox->setEnabled(!readOnly);
    ui->timeEdit->setEnabled(!readOnly);
    ui->dateEditdate_6->setEnabled(!readOnly);
    ui->radioOpticien_6->setEnabled(!readOnly);
    ui->radioAssistant_6->setEnabled(!readOnly);
    ui->radioActif_6->setEnabled(!readOnly);
    ui->radioInactif_6->setEnabled(!readOnly);
    ui->radioButton_2->setEnabled(!readOnly);

    ui->lineEdit->setReadOnly(readOnly);
}

void MainWindow::refreshTable()
{
    ui->tableWidgetUsers_5->setRowCount(0);

    QString critereTri = ui->comboBox_tri->currentData().toString();
    QString ordreTri = ui->radioSortAsc_5->isChecked() ? "ASC" : "DESC";

    QString termeRecherche = ui->lineEdit_recherche->text();
    bool checkId = ui->checkid_5->isChecked();
    bool checkClient = ui->checkclient_5->isChecked();
    bool checkHeure = ui->checkheure_5->isChecked();
    bool checkDate = ui->checkdate_5->isChecked();
    bool checkRole = ui->checkRole_5->isChecked();
    bool checkStatut = ui->checkstatut_5->isChecked();

    QSqlQueryModel* model = R.afficher(critereTri, ordreTri, termeRecherche,
                                       checkId, checkClient, checkHeure,
                                       checkDate, checkRole, checkStatut);

    if (model) {
        for (int row = 0; row < model->rowCount(); ++row) {
            ui->tableWidgetUsers_5->insertRow(row);
            for (int col = 0; col < model->columnCount(); ++col) {
                QModelIndex index = model->index(row, col);
                QString data = model->data(index).toString();
                ui->tableWidgetUsers_5->setItem(row, col, new QTableWidgetItem(data));
            }
        }
        delete model;
    }
}

void MainWindow::clearFields()
{
    ui->lineEdit->clear();

    // <-- MODIFICATION -->
    // Met le ComboBox en état "placeholder"
    ui->comboBox->setCurrentIndex(-1);
    ui->comboBox->clearEditText();

    ui->timeEdit->setTime(QTime(0, 0));
    ui->dateEditdate_6->setDate(QDate::currentDate());
    ui->radioOpticien_6->setChecked(true);
    ui->radioActif_6->setChecked(true);
    m_editMode = false;

    ui->lineEdit->setReadOnly(false);
}

void MainWindow::on_btnAjouter_5_clicked()
{
    int id = ui->lineEdit->text().toInt();
    if (id == 0) {
        QMessageBox::warning(this, "ID Invalide", "Veuillez saisir un ID (numérique et non nul).");
        return;
    }

    // Récupère le texte du ComboBox (qui vient de la table CLIENTE)
    QString client = ui->comboBox->currentText();

    // Vérification que le client n'est pas vide
    if (client.isEmpty()) {
        QMessageBox::warning(this, "Client manquant", "Veuillez sélectionner un client dans la liste.");
        return;
    }

    QString heure = ui->timeEdit->time().toString("hh:mm:ss");
    QDate date = ui->dateEditdate_6->date();

    QString role;
    if (ui->radioOpticien_6->isChecked()) role = "Opticien";
    else if (ui->radioAssistant_6->isChecked()) role = "Assistant";

    QString statut;
    if (ui->radioActif_6->isChecked()) statut = "Confirmé";
    else if (ui->radioInactif_6->isChecked()) statut = "Annulé";
    else if (ui->radioButton_2->isChecked()) statut = "En attente";

    RendezVous rdv(id, client, heure, date, role, statut);

    if (rdv.ajouter()) {
        QMessageBox::information(this, "Succès", "Rendez-vous ajouté !");
        refreshTable();
        clearFields();
    } else {
        QMessageBox::critical(this, "Échec", "L'ajout a échoué.\nL'ID existe peut-être déjà.");
    }
}

void MainWindow::on_btnReinitMdp_6_clicked()
{
    int id = ui->lineEdit->text().toInt();
    if (id == 0) {
        QMessageBox::warning(this, "Attention", "Veuillez sélectionner un rendez-vous à modifier.");
        return;
    }

    QString client = ui->comboBox->currentText();

    if (client.isEmpty()) {
        QMessageBox::warning(this, "Client manquant", "Veuillez sélectionner un client dans la liste.");
        return;
    }

    QString heure = ui->timeEdit->time().toString("hh:mm:ss");
    QDate date = ui->dateEditdate_6->date();
    QString role = ui->radioOpticien_6->isChecked() ? "Opticien" : "Assistant";
    QString statut;
    if (ui->radioActif_6->isChecked()) statut = "Confirmé";
    else if (ui->radioInactif_6->isChecked()) statut = "Annulé";
    else if (ui->radioButton_2->isChecked()) statut = "En attente";

    RendezVous rdv(id, client, heure, date, role, statut);

    if (rdv.modifier()) {
        QMessageBox::information(this, "Succès", "Rendez-vous modifié !");
        refreshTable();
        clearFields();
    } else {
        QMessageBox::critical(this, "Échec", "La modification a échoué.");
    }
}

void MainWindow::on_btnsupprimer_5_clicked()
{
    int id = ui->lineEdit->text().toInt();
    if (id == 0) {
        QMessageBox::warning(this, "Attention", "Veuillez sélectionner un rendez-vous à supprimer.");
        return;
    }

    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Confirmation", "Voulez-vous vraiment supprimer ce rendez-vous ?",
                                  QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes) {
        if (R.supprimer(id)) {
            QMessageBox::information(this, "Succès", "Rendez-vous supprimé !");
            refreshTable();
            clearFields();
        } else {
            QMessageBox::critical(this, "Échec", "La suppression a échoué.");
        }
    }
}

void MainWindow::on_tableWidgetUsers_5_cellClicked(int row, int column)
{
    Q_UNUSED(column);

    int id = ui->tableWidgetUsers_5->item(row, 0)->text().toInt();
    QSqlQuery query;
    query.prepare("SELECT ID, CLIENT, HEURE, DATEE, ROLE, STATUT FROM TABLE_RENDEZ_VOUS WHERE ID = :id");
    query.bindValue(":id", id);

    if (query.exec() && query.next()) {
        ui->lineEdit->setText(query.value("ID").toString());

        // Ceci sélectionnera le client dans le ComboBox
        ui->comboBox->setCurrentText(query.value("CLIENT").toString().trimmed());

        ui->timeEdit->setTime(QTime::fromString(query.value("HEURE").toString(), "hh:mm:ss"));
        ui->dateEditdate_6->setDate(query.value("DATEE").toDate());

        QString role = query.value("ROLE").toString().trimmed();
        if (role == "Opticien") ui->radioOpticien_6->setChecked(true);
        else ui->radioAssistant_6->setChecked(true);

        QString statut = query.value("STATUT").toString().trimmed();
        if (statut == "Confirmé") ui->radioActif_6->setChecked(true);
        else if (statut == "Annulé") ui->radioInactif_6->setChecked(true);
        else if (statut == "En attente") ui->radioButton_2->setChecked(true);

        m_editMode = true;
        ui->lineEdit->setReadOnly(true);
    }
}

void MainWindow::on_btn_appliquer_tri_clicked()
{
    refreshTable();
}

void MainWindow::on_btnResetSort_5_clicked()
{
    ui->comboBox_tri->setCurrentIndex(0);
    ui->radioSortAsc_5->setChecked(true);
    refreshTable();
}

void MainWindow::on_btn_appliquer_recherche_2_clicked()
{
    refreshTable();
}

void MainWindow::on_btnResetrech_6_clicked()
{
    ui->lineEdit_recherche->clear();
    ui->checkid_5->setChecked(false);
    ui->checkclient_5->setChecked(false);
    ui->checkheure_5->setChecked(false);
    ui->checkdate_5->setChecked(false);
    ui->checkRole_5->setChecked(false);
    ui->checkstatut_5->setChecked(false);
    refreshTable();
}

// ---------------------------------------------------------------------------
// <-- NOUVELLE FONCTION AJOUTÉE -->
// ---------------------------------------------------------------------------
void MainWindow::loadClientComboBox()
{
    // 1. Vider le ComboBox pour éviter les doublons
    ui->comboBox->clear();

    // 2. Préparer la requête pour lire la table CLIENTE
    QSqlQuery query;

    // Concatène le NOM et le PRENOM pour les afficher
    // La syntaxe "NOM || ' ' || PRENOM" est standard SQL (fonctionne sur Oracle)
    query.prepare("SELECT NOM || ' ' || PRENOM FROM KHAMMESI.CLIENTE ORDER BY NOM ASC, PRENOM ASC");

    // 3. Exécuter la requête
    if (!query.exec()) {
        qDebug() << "Erreur lors du chargement des clients (ComboBox):" << query.lastError().text();
        QMessageBox::critical(this, "Erreur Base de Données",
                              "Impossible de charger la liste des clients.\n" + query.lastError().text());
        return;
    }

    // 4. Remplir le ComboBox avec les résultats
    while (query.next()) {
        ui->comboBox->addItem(query.value(0).toString());
    }

    // 5. Mettre un état initial
    ui->comboBox->setCurrentIndex(-1); // Aucun client sélectionné
    ui->comboBox->setPlaceholderText("Sélectionner un client...");
}
