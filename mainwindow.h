#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "rendez_vous.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class Gemployer;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btnAjouter_5_clicked();
    void on_btnReinitMdp_6_clicked();
    void on_btnsupprimer_5_clicked();
    void on_tableWidgetUsers_5_cellClicked(int row, int column);

    void on_btn_appliquer_tri_clicked();
    void on_btnResetSort_5_clicked();
    void on_btn_appliquer_recherche_2_clicked();
    void on_btnResetrech_6_clicked();

private:
    Ui::Gemployer *ui;
    RendezVous R;
    bool m_editMode;

    void refreshTable();
    void clearFields();
    void setFormReadOnly(bool readOnly);

    // <-- MODIFICATION AJOUTÉE -->
    void loadClientComboBox();
};
#endif // MAINWINDOW_H
