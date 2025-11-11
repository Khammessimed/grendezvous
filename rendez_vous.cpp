#include "rendez_vous.h"
#include <QDebug>
#include <QSqlError>
#include <QStringList>
#include <QList>

RendezVous::RendezVous()
{
    m_id = 0;
    m_client = "";
    m_heure = "";
    m_date = QDate();
    m_role = "";
    m_statut = "";
}

RendezVous::RendezVous(int id, QString client, QString heure, QDate date, QString role, QString statut)
    : m_id(id), m_client(client), m_heure(heure), m_date(date), m_role(role), m_statut(statut)
{
}

int RendezVous::getId() const { return m_id; }
QString RendezVous::getClient() const { return m_client; }
QString RendezVous::getHeure() const { return m_heure; }
QDate RendezVous::getDate() const { return m_date; }
QString RendezVous::getRole() const { return m_role; }
QString RendezVous::getStatut() const { return m_statut; }

void RendezVous::setId(int id) { m_id = id; }
void RendezVous::setClient(const QString &client) { m_client = client; }
void RendezVous::setHeure(const QString &heure) { m_heure = heure; }
void RendezVous::setDate(const QDate &date) { m_date = date; }
void RendezVous::setRole(const QString &role) { m_role = role; }
void RendezVous::setStatut(const QString &statut) { m_statut = statut; }

bool RendezVous::ajouter()
{
    QSqlQuery query;
    query.prepare("INSERT INTO TABLE_RENDEZ_VOUS (ID, CLIENT, HEURE, DATEE, ROLE, STATUT) "
                  "VALUES (:id, :client, :heure, :datee, :role, :statut)");

    query.bindValue(":id", m_id);
    query.bindValue(":client", m_client);
    query.bindValue(":heure", m_heure);
    query.bindValue(":datee", m_date);
    query.bindValue(":role", m_role);
    query.bindValue(":statut", m_statut);

    if (!query.exec()) {
        qDebug() << "Erreur lors de l'ajout:" << query.lastError().text();
        return false;
    }
    return true;
}

QSqlQueryModel* RendezVous::afficher(const QString& critereTri,
                                     const QString& ordreTri,
                                     const QString& termeRecherche,
                                     bool checkId, bool checkClient, bool checkHeure,
                                     bool checkDate, bool checkRole, bool checkStatut)
{
    QSqlQueryModel* model = new QSqlQueryModel();
    QSqlQuery query;
    QString queryString = "SELECT ID, CLIENT, HEURE, DATEE, ROLE, STATUT FROM TABLE_RENDEZ_VOUS";

    QList<QString> whereConditions;
    bool searchActive = !termeRecherche.isEmpty() &&
                        (checkId || checkClient || checkHeure || checkDate || checkRole || checkStatut);

    if (searchActive) {
        QStringList searchFields;
        if (checkId)    searchFields.append("CAST(ID AS VARCHAR(10)) LIKE :recherche");
        if (checkClient) searchFields.append("CLIENT LIKE :recherche");
        if (checkHeure)  searchFields.append("HEURE LIKE :recherche");
        if (checkDate)   searchFields.append("CAST(DATEE AS VARCHAR(20)) LIKE :recherche");
        if (checkRole)   searchFields.append("ROLE LIKE :recherche");
        if (checkStatut) searchFields.append("STATUT LIKE :recherche");

        whereConditions.append("(" + searchFields.join(" OR ") + ")");
    }

    if (!whereConditions.isEmpty()) {
        queryString += " WHERE " + whereConditions.join(" AND ");
    }

    QString colonneDeTri = critereTri;
    QString ordre = ordreTri.toUpper() == "DESC" ? "DESC" : "ASC";

    if (colonneDeTri.isEmpty() || !QStringList({"ID", "CLIENT", "HEURE", "DATEE", "ROLE", "STATUT"}).contains(colonneDeTri.toUpper())) {
        colonneDeTri = "ID";
    }
    queryString += " ORDER BY " + colonneDeTri + " " + ordre;

    query.prepare(queryString);

    if (searchActive) {
        query.bindValue(":recherche", "%" + termeRecherche + "%");
    }

    if (!query.exec()) {
        qDebug() << "Erreur lors de l'affichage (tri/recherche):" << query.lastError().text();
        qDebug() << "Requête échouée:" << queryString;
        delete model;
        return nullptr;
    }

    model->setQuery(query);

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Client"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Heure"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Date"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Rôle"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Statut"));

    return model;
}

bool RendezVous::supprimer(int id)
{
    QSqlQuery query;
    query.prepare("DELETE FROM TABLE_RENDEZ_VOUS WHERE ID = :id");
    query.bindValue(":id", id);

    if (!query.exec()) {
        qDebug() << "Erreur lors de la suppression:" << query.lastError().text();
        return false;
    }
    return true;
}

bool RendezVous::modifier()
{
    QSqlQuery query;
    query.prepare("UPDATE TABLE_RENDEZ_VOUS SET CLIENT = :client, HEURE = :heure, "
                  "DATEE = :datee, ROLE = :role, STATUT = :statut WHERE ID = :id");

    query.bindValue(":id", m_id);
    query.bindValue(":client", m_client);
    query.bindValue(":heure", m_heure);
    query.bindValue(":datee", m_date);
    query.bindValue(":role", m_role);
    query.bindValue(":statut", m_statut);

    if (!query.exec()) {
        qDebug() << "Erreur lors de la modification:" << query.lastError().text();
        return false;
    }
    return true;
}
