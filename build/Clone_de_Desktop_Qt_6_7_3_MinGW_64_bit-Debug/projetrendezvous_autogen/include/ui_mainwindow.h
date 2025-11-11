/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *layoutWidget;
    QVBoxLayout *sidebarLayout_4;
    QLabel *sidebarLogo_4;
    QPushButton *btnUtilisateur_4;
    QPushButton *btnClient_4;
    QPushButton *btnRendezVous_4;
    QPushButton *btnProduit_4;
    QPushButton *btnFournisseur_4;
    QSpacerItem *sidebarSpacer_4;
    QGroupBox *formGroupBox_5;
    QGridLayout *formGridLayout_6;
    QLabel *labelPrenom_6;
    QLabel *labelMdp_6;
    QDateEdit *dateEditdate_6;
    QLabel *labelDate_6;
    QLabel *labelSalaire_6;
    QLineEdit *lineEdit;
    QComboBox *comboBox;
    QTimeEdit *timeEdit;
    QGroupBox *roleGroupBox_6;
    QHBoxLayout *roleLayout_6;
    QRadioButton *radioOpticien_6;
    QRadioButton *radioAssistant_6;
    QGroupBox *statusGroupBox_6;
    QHBoxLayout *statusLayout_6;
    QRadioButton *radioActif_6;
    QRadioButton *radioInactif_6;
    QRadioButton *radioButton_2;
    QPushButton *btnAjouter_5;
    QPushButton *btnsupprimer_5;
    QPushButton *btnGenererPDF_5;
    QGroupBox *searchGroupBox_5;
    QHBoxLayout *searchLayout_5;
    QLabel *labelSearch_5;
    QLineEdit *lineEdit_recherche;
    QLabel *labelFilterBy_5;
    QCheckBox *checkclient_5;
    QCheckBox *checkid_5;
    QCheckBox *checkheure_5;
    QCheckBox *checkRole_5;
    QCheckBox *checkstatut_5;
    QCheckBox *checkdate_5;
    QPushButton *btn_appliquer_recherche_2;
    QPushButton *btnResetrech_6;
    QCalendarWidget *calendarWidget;
    QGroupBox *statsGroupBox_5;
    QVBoxLayout *statsLayout_5;
    QLabel *labelChartPlaceholder_5;
    QLabel *labelTotalUsers_5;
    QLabel *labelActiveUsers_5;
    QLabel *labelInactiveUsers_5;
    QLabel *labelRoleDistribution_5;
    QSpacerItem *statsSpacer_5;
    QGroupBox *sortGroupBox_5;
    QHBoxLayout *sortLayout_5;
    QLabel *labelSortBy_5;
    QComboBox *comboBox_tri;
    QRadioButton *radioSortAsc_5;
    QRadioButton *radioSortDesc_5;
    QPushButton *btn_appliquer_tri;
    QPushButton *btnResetSort_5;
    QPushButton *btnReinitMdp_6;
    QTableWidget *tableWidgetUsers_5;
    QWidget *page_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1165, 728);
        MainWindow->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-color: #2c313c; \n"
"    color: #dfe6e9; \n"
"    font-family: \"Segoe UI\", sans-serif;\n"
"}\n"
"\n"
"QGroupBox {\n"
"    background-color: #353b48; \n"
"    border: 1px solid #57606f;\n"
"    border-radius: 8px;\n"
"    margin-top: 10px;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top left;\n"
"    padding: 5px 15px;\n"
"    margin-left: 10px;\n"
"    background-color: #0097e6;\n"
"    color: #ffffff;\n"
"    border-radius: 4px;\n"
"    font-size: 11pt;\n"
"}\n"
"\n"
"QGroupBox#statsGroupBox {\n"
"    border-color: #4cd137; \n"
"}\n"
"\n"
"QGroupBox#statsGroupBox::title {\n"
"    background-color: #4cd137; \n"
"}\n"
"\n"
"QLabel {\n"
"    color: #dfe6e9;\n"
"    font-size: 10pt;\n"
"    background-color: transparent;\n"
"}\n"
"\n"
"QLineEdit, QDateEdit, QTimeEdit, QDoubleSpinBox, QSpinBox {\n"
"    background-color: #2f3640;\n"
"    border: 1px solid #57606f;\n"
"    border-radius: 4px;\n"
"    padd"
                        "ing: 8px;\n"
"    color: #f5f6fa;\n"
"}\n"
"\n"
"QLineEdit:focus, QDateEdit:focus, QTimeEdit:focus, QDoubleSpinBox:focus, QSpinBox:focus {\n"
"    border: 1px solid #00a8ff; \n"
"}\n"
"\n"
"QLineEdit:hover, QDateEdit:hover, QTimeEdit:hover, QDoubleSpinBox:hover, QSpinBox:hover {\n"
"    border: 1px solid #718093;\n"
"}\n"
"\n"
"QPushButton {\n"
"    background-color: #0097e6; \n"
"    color: #ffffff;\n"
"    border: none;\n"
"    border-radius: 5px;\n"
"    padding: 10px 15px;\n"
"    font-size: 10pt;\n"
"    font-weight: bold;\n"
"    transition: background-color 0.3s ease; \n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #00a8ff; \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #0087c9; \n"
"}\n"
"\n"
"QPushButton#boutonAjouter {\n"
"    background-color: #4cd137;\n"
"}\n"
"QPushButton#boutonAjouter:hover {\n"
"    background-color: #44bd32; \n"
"}\n"
"QPushButton#boutonAjouter:pressed {\n"
"    background-color: #3aa12b; \n"
"}\n"
"\n"
"QPushButton#boutonModifier {\n"
"    backgr"
                        "ound-color: #f0932b;\n"
"}\n"
"QPushButton#boutonModifier:hover {\n"
"    background-color: #e67e22;\n"
"}\n"
"QPushButton#boutonModifier:pressed {\n"
"    background-color: #d35400;\n"
"}\n"
"\n"
"QPushButton#boutonSupprimer {\n"
"    background-color: #e84118;\n"
"}\n"
"QPushButton#boutonSupprimer:hover {\n"
"    background-color: #c23616;\n"
"}\n"
"QPushButton#boutonSupprimer:pressed {\n"
"    background-color: #a22b0f;\n"
"}\n"
"\n"
"QTableWidget {\n"
"    background-color: #353b48;\n"
"    border: 1px solid #57606f;\n"
"    border-radius: 5px;\n"
"    gridline-color: #2f3640;\n"
"    color: #dfe6e9;\n"
"    alternate-background-color: #3d4451;\n"
"}\n"
"\n"
"QTableWidget::item {\n"
"    padding: 8px;\n"
"    border-bottom: 1px solid #2f3640;\n"
"}\n"
"\n"
"QTableWidget::item:selected {\n"
"    background-color: #0097e6;\n"
"    color: #ffffff;\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"    background-color: #2f3640;\n"
"    color: #00a8ff;\n"
"    padding: 8px;\n"
"    border: none;\n"
"    font-weight: bo"
                        "ld;\n"
"}\n"
"\n"
"QCalendarWidget QWidget#qt_calendar_navigationbar { background-color: #2f3640; }\n"
"QCalendarWidget QToolButton { color: #ffffff; background-color: transparent; border: none; }\n"
"QCalendarWidget QToolButton:hover { background-color: #57606f; }\n"
"QCalendarWidget QAbstractItemView { background-color: #353b48; selection-background-color: #0097e6; color: #dfe6e9; }\n"
"\n"
"QRadioButton, QCheckBox {\n"
"    color: #dfe6e9;\n"
"    background-color: transparent;\n"
"    spacing: 8px;\n"
"    font-size: 10pt;\n"
"}\n"
"\n"
"QRadioButton::indicator, QCheckBox::indicator {\n"
"    width: 16px; height: 16px;\n"
"    border: 1px solid #57606f;\n"
"    background-color: #2f3640;\n"
"}\n"
"QRadioButton::indicator { border-radius: 8px; }\n"
"QCheckBox::indicator { border-radius: 3px; }\n"
"\n"
"QRadioButton::indicator:hover, QCheckBox::indicator:hover {\n"
"    border-color: #00a8ff;\n"
"}\n"
"\n"
"QRadioButton::indicator:checked, QCheckBox::indicator:checked {\n"
"    background-color: #00a8ff;\n"
""
                        "    border: 1px solid #0097e6;\n"
"}\n"
"\n"
"QScrollBar:vertical {\n"
"    border: none; background: #2f3640; width: 12px;\n"
"    margin: 0px; border-radius: 6px;\n"
"}\n"
"QScrollBar::handle:vertical {\n"
"    background: #57606f; min-height: 25px; border-radius: 6px;\n"
"}\n"
"QScrollBar::handle:vertical:hover { background: #718093; }\n"
"\n"
"QWidget#graphiqueWidget {\n"
"    background-color: #f5f6fa;\n"
"    border: 2px dashed #57606f;\n"
"    border-radius: 10px;\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(10, 0, 1141, 681));
        page = new QWidget();
        page->setObjectName("page");
        layoutWidget = new QWidget(page);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(0, 0, 82, 681));
        sidebarLayout_4 = new QVBoxLayout(layoutWidget);
        sidebarLayout_4->setObjectName("sidebarLayout_4");
        sidebarLayout_4->setContentsMargins(0, 0, 0, 0);
        sidebarLogo_4 = new QLabel(layoutWidget);
        sidebarLogo_4->setObjectName("sidebarLogo_4");
        sidebarLogo_4->setMinimumSize(QSize(0, 60));
        sidebarLogo_4->setStyleSheet(QString::fromUtf8("font-size: 24pt; color: white; padding: 10px;"));
        sidebarLogo_4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        sidebarLayout_4->addWidget(sidebarLogo_4);

        btnUtilisateur_4 = new QPushButton(layoutWidget);
        btnUtilisateur_4->setObjectName("btnUtilisateur_4");
        btnUtilisateur_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background: rgba(255,255,255,0.1); \n"
"    color: white; \n"
"    border: none; \n"
"    border-radius: 8px; \n"
"    padding: 15px 5px; \n"
"    font-size: 16pt;\n"
"    margin: 2px 5px;\n"
"}\n"
"QPushButton:hover { background: rgba(255,255,255,0.2); }"));
        btnUtilisateur_4->setCheckable(true);
        btnUtilisateur_4->setChecked(true);

        sidebarLayout_4->addWidget(btnUtilisateur_4);

        btnClient_4 = new QPushButton(layoutWidget);
        btnClient_4->setObjectName("btnClient_4");
        btnClient_4->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"    background: rgba(255,255,255,0.1); \n"
"    color: white; \n"
"    border: none; \n"
"    border-radius: 8px; \n"
"    padding: 15px 5px; \n"
"    font-size: 16pt;\n"
"    margin: 2px 5px;\n"
"}\n"
"QPushButton:hover { background: rgba(255,255,255,0.2); }\n"
"         "));
        btnClient_4->setCheckable(true);

        sidebarLayout_4->addWidget(btnClient_4);

        btnRendezVous_4 = new QPushButton(layoutWidget);
        btnRendezVous_4->setObjectName("btnRendezVous_4");
        btnRendezVous_4->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"    background: rgba(255,255,255,0.3); \n"
"    color: white; \n"
"    border: none; \n"
"    border-radius: 8px; \n"
"    padding: 15px 5px; \n"
"    font-size: 16pt;\n"
"    margin: 2px 5px;\n"
"}\n"
"QPushButton:hover { background: rgba(255,255,255,0.3); }\n"
"QPushButton:pressed { background: rgba(255,255,255,0.4); }\n"
"QPushButton:checked { background: rgba(255,255,255,0.5); }"));
        btnRendezVous_4->setCheckable(true);

        sidebarLayout_4->addWidget(btnRendezVous_4);

        btnProduit_4 = new QPushButton(layoutWidget);
        btnProduit_4->setObjectName("btnProduit_4");
        btnProduit_4->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"    background: rgba(255,255,255,0.1); \n"
"    color: white; \n"
"    border: none; \n"
"    border-radius: 8px; \n"
"    padding: 15px 5px; \n"
"    font-size: 16pt;\n"
"    margin: 2px 5px;\n"
"}\n"
"QPushButton:hover { background: rgba(255,255,255,0.2); }\n"
"         "));
        btnProduit_4->setCheckable(true);

        sidebarLayout_4->addWidget(btnProduit_4);

        btnFournisseur_4 = new QPushButton(layoutWidget);
        btnFournisseur_4->setObjectName("btnFournisseur_4");
        btnFournisseur_4->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"    background: rgba(255,255,255,0.1); \n"
"    color: white; \n"
"    border: none; \n"
"    border-radius: 8px; \n"
"    padding: 15px 5px; \n"
"    font-size: 16pt;\n"
"    margin: 2px 5px;\n"
"}\n"
"QPushButton:hover { background: rgba(255,255,255,0.2); }\n"
"         "));
        btnFournisseur_4->setCheckable(true);

        sidebarLayout_4->addWidget(btnFournisseur_4);

        sidebarSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        sidebarLayout_4->addItem(sidebarSpacer_4);

        formGroupBox_5 = new QGroupBox(page);
        formGroupBox_5->setObjectName("formGroupBox_5");
        formGroupBox_5->setGeometry(QRect(100, 0, 591, 232));
        formGroupBox_5->setMinimumSize(QSize(0, 200));
        formGridLayout_6 = new QGridLayout(formGroupBox_5);
        formGridLayout_6->setObjectName("formGridLayout_6");
        labelPrenom_6 = new QLabel(formGroupBox_5);
        labelPrenom_6->setObjectName("labelPrenom_6");

        formGridLayout_6->addWidget(labelPrenom_6, 0, 2, 1, 1);

        labelMdp_6 = new QLabel(formGroupBox_5);
        labelMdp_6->setObjectName("labelMdp_6");

        formGridLayout_6->addWidget(labelMdp_6, 1, 2, 1, 1);

        dateEditdate_6 = new QDateEdit(formGroupBox_5);
        dateEditdate_6->setObjectName("dateEditdate_6");
        dateEditdate_6->setCalendarPopup(true);
        dateEditdate_6->setDate(QDate(2024, 1, 1));

        formGridLayout_6->addWidget(dateEditdate_6, 1, 1, 1, 1);

        labelDate_6 = new QLabel(formGroupBox_5);
        labelDate_6->setObjectName("labelDate_6");

        formGridLayout_6->addWidget(labelDate_6, 1, 0, 1, 1);

        labelSalaire_6 = new QLabel(formGroupBox_5);
        labelSalaire_6->setObjectName("labelSalaire_6");

        formGridLayout_6->addWidget(labelSalaire_6, 0, 0, 1, 1);

        lineEdit = new QLineEdit(formGroupBox_5);
        lineEdit->setObjectName("lineEdit");

        formGridLayout_6->addWidget(lineEdit, 0, 3, 1, 1);

        comboBox = new QComboBox(formGroupBox_5);
        comboBox->setObjectName("comboBox");

        formGridLayout_6->addWidget(comboBox, 0, 1, 1, 1);

        timeEdit = new QTimeEdit(formGroupBox_5);
        timeEdit->setObjectName("timeEdit");

        formGridLayout_6->addWidget(timeEdit, 1, 3, 1, 1);

        roleGroupBox_6 = new QGroupBox(formGroupBox_5);
        roleGroupBox_6->setObjectName("roleGroupBox_6");
        roleGroupBox_6->setMinimumSize(QSize(0, 92));
        roleLayout_6 = new QHBoxLayout(roleGroupBox_6);
        roleLayout_6->setObjectName("roleLayout_6");
        radioOpticien_6 = new QRadioButton(roleGroupBox_6);
        radioOpticien_6->setObjectName("radioOpticien_6");
        radioOpticien_6->setChecked(true);

        roleLayout_6->addWidget(radioOpticien_6);

        radioAssistant_6 = new QRadioButton(roleGroupBox_6);
        radioAssistant_6->setObjectName("radioAssistant_6");

        roleLayout_6->addWidget(radioAssistant_6);


        formGridLayout_6->addWidget(roleGroupBox_6, 2, 0, 1, 2);

        statusGroupBox_6 = new QGroupBox(formGroupBox_5);
        statusGroupBox_6->setObjectName("statusGroupBox_6");
        statusGroupBox_6->setMinimumSize(QSize(0, 92));
        statusLayout_6 = new QHBoxLayout(statusGroupBox_6);
        statusLayout_6->setObjectName("statusLayout_6");
        radioActif_6 = new QRadioButton(statusGroupBox_6);
        radioActif_6->setObjectName("radioActif_6");
        radioActif_6->setChecked(true);

        statusLayout_6->addWidget(radioActif_6);

        radioInactif_6 = new QRadioButton(statusGroupBox_6);
        radioInactif_6->setObjectName("radioInactif_6");

        statusLayout_6->addWidget(radioInactif_6);

        radioButton_2 = new QRadioButton(statusGroupBox_6);
        radioButton_2->setObjectName("radioButton_2");

        statusLayout_6->addWidget(radioButton_2);


        formGridLayout_6->addWidget(statusGroupBox_6, 2, 2, 1, 2);

        btnAjouter_5 = new QPushButton(page);
        btnAjouter_5->setObjectName("btnAjouter_5");
        btnAjouter_5->setGeometry(QRect(90, 230, 191, 41));
        btnAjouter_5->setMinimumSize(QSize(120, 35));
        btnAjouter_5->setStyleSheet(QString::fromUtf8("background-color:rgb(53, 132, 228);"));
        btnsupprimer_5 = new QPushButton(page);
        btnsupprimer_5->setObjectName("btnsupprimer_5");
        btnsupprimer_5->setGeometry(QRect(290, 230, 281, 41));
        btnsupprimer_5->setMinimumSize(QSize(140, 35));
        btnsupprimer_5->setStyleSheet(QString::fromUtf8("background-color:rgb(53, 132, 228);"));
        btnGenererPDF_5 = new QPushButton(page);
        btnGenererPDF_5->setObjectName("btnGenererPDF_5");
        btnGenererPDF_5->setGeometry(QRect(580, 230, 251, 41));
        btnGenererPDF_5->setMinimumSize(QSize(120, 35));
        btnGenererPDF_5->setStyleSheet(QString::fromUtf8("background-color:rgb(53, 132, 228);"));
        searchGroupBox_5 = new QGroupBox(page);
        searchGroupBox_5->setObjectName("searchGroupBox_5");
        searchGroupBox_5->setGeometry(QRect(90, 281, 1031, 71));
        searchGroupBox_5->setMaximumSize(QSize(16777215, 100));
        searchLayout_5 = new QHBoxLayout(searchGroupBox_5);
        searchLayout_5->setObjectName("searchLayout_5");
        labelSearch_5 = new QLabel(searchGroupBox_5);
        labelSearch_5->setObjectName("labelSearch_5");

        searchLayout_5->addWidget(labelSearch_5);

        lineEdit_recherche = new QLineEdit(searchGroupBox_5);
        lineEdit_recherche->setObjectName("lineEdit_recherche");

        searchLayout_5->addWidget(lineEdit_recherche);

        labelFilterBy_5 = new QLabel(searchGroupBox_5);
        labelFilterBy_5->setObjectName("labelFilterBy_5");
        labelFilterBy_5->setMaximumSize(QSize(500, 16777215));

        searchLayout_5->addWidget(labelFilterBy_5);

        checkclient_5 = new QCheckBox(searchGroupBox_5);
        checkclient_5->setObjectName("checkclient_5");
        checkclient_5->setMaximumSize(QSize(90, 16777215));
        checkclient_5->setChecked(true);

        searchLayout_5->addWidget(checkclient_5);

        checkid_5 = new QCheckBox(searchGroupBox_5);
        checkid_5->setObjectName("checkid_5");
        checkid_5->setMaximumSize(QSize(90, 16777215));
        checkid_5->setChecked(false);

        searchLayout_5->addWidget(checkid_5);

        checkheure_5 = new QCheckBox(searchGroupBox_5);
        checkheure_5->setObjectName("checkheure_5");
        checkheure_5->setMaximumSize(QSize(90, 16777215));

        searchLayout_5->addWidget(checkheure_5);

        checkRole_5 = new QCheckBox(searchGroupBox_5);
        checkRole_5->setObjectName("checkRole_5");
        checkRole_5->setMaximumSize(QSize(90, 16777215));

        searchLayout_5->addWidget(checkRole_5);

        checkstatut_5 = new QCheckBox(searchGroupBox_5);
        checkstatut_5->setObjectName("checkstatut_5");

        searchLayout_5->addWidget(checkstatut_5);

        checkdate_5 = new QCheckBox(searchGroupBox_5);
        checkdate_5->setObjectName("checkdate_5");

        searchLayout_5->addWidget(checkdate_5);

        btn_appliquer_recherche_2 = new QPushButton(searchGroupBox_5);
        btn_appliquer_recherche_2->setObjectName("btn_appliquer_recherche_2");
        btn_appliquer_recherche_2->setStyleSheet(QString::fromUtf8("background-color:rgb(53, 132, 228);"));

        searchLayout_5->addWidget(btn_appliquer_recherche_2);

        btnResetrech_6 = new QPushButton(searchGroupBox_5);
        btnResetrech_6->setObjectName("btnResetrech_6");

        searchLayout_5->addWidget(btnResetrech_6);

        calendarWidget = new QCalendarWidget(page);
        calendarWidget->setObjectName("calendarWidget");
        calendarWidget->setGeometry(QRect(700, 0, 411, 211));
        statsGroupBox_5 = new QGroupBox(page);
        statsGroupBox_5->setObjectName("statsGroupBox_5");
        statsGroupBox_5->setGeometry(QRect(760, 350, 381, 331));
        statsGroupBox_5->setMinimumSize(QSize(300, 0));
        statsGroupBox_5->setMaximumSize(QSize(9100, 16777215));
        statsLayout_5 = new QVBoxLayout(statsGroupBox_5);
        statsLayout_5->setObjectName("statsLayout_5");
        labelChartPlaceholder_5 = new QLabel(statsGroupBox_5);
        labelChartPlaceholder_5->setObjectName("labelChartPlaceholder_5");
        labelChartPlaceholder_5->setMinimumSize(QSize(0, 200));
        labelChartPlaceholder_5->setStyleSheet(QString::fromUtf8("background: #f5f5f5; border: 2px dashed #ccc; border-radius: 10px; color: #666; font-style: italic;"));
        labelChartPlaceholder_5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        statsLayout_5->addWidget(labelChartPlaceholder_5);

        labelTotalUsers_5 = new QLabel(statsGroupBox_5);
        labelTotalUsers_5->setObjectName("labelTotalUsers_5");
        labelTotalUsers_5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        statsLayout_5->addWidget(labelTotalUsers_5);

        labelActiveUsers_5 = new QLabel(statsGroupBox_5);
        labelActiveUsers_5->setObjectName("labelActiveUsers_5");
        labelActiveUsers_5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        statsLayout_5->addWidget(labelActiveUsers_5);

        labelInactiveUsers_5 = new QLabel(statsGroupBox_5);
        labelInactiveUsers_5->setObjectName("labelInactiveUsers_5");
        labelInactiveUsers_5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        statsLayout_5->addWidget(labelInactiveUsers_5);

        labelRoleDistribution_5 = new QLabel(statsGroupBox_5);
        labelRoleDistribution_5->setObjectName("labelRoleDistribution_5");
        labelRoleDistribution_5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        statsLayout_5->addWidget(labelRoleDistribution_5);

        statsSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        statsLayout_5->addItem(statsSpacer_5);

        sortGroupBox_5 = new QGroupBox(page);
        sortGroupBox_5->setObjectName("sortGroupBox_5");
        sortGroupBox_5->setGeometry(QRect(90, 600, 671, 80));
        sortGroupBox_5->setMaximumSize(QSize(16777215, 104));
        sortLayout_5 = new QHBoxLayout(sortGroupBox_5);
        sortLayout_5->setObjectName("sortLayout_5");
        labelSortBy_5 = new QLabel(sortGroupBox_5);
        labelSortBy_5->setObjectName("labelSortBy_5");

        sortLayout_5->addWidget(labelSortBy_5);

        comboBox_tri = new QComboBox(sortGroupBox_5);
        comboBox_tri->setObjectName("comboBox_tri");

        sortLayout_5->addWidget(comboBox_tri);

        radioSortAsc_5 = new QRadioButton(sortGroupBox_5);
        radioSortAsc_5->setObjectName("radioSortAsc_5");
        radioSortAsc_5->setChecked(true);

        sortLayout_5->addWidget(radioSortAsc_5);

        radioSortDesc_5 = new QRadioButton(sortGroupBox_5);
        radioSortDesc_5->setObjectName("radioSortDesc_5");

        sortLayout_5->addWidget(radioSortDesc_5);

        btn_appliquer_tri = new QPushButton(sortGroupBox_5);
        btn_appliquer_tri->setObjectName("btn_appliquer_tri");
        btn_appliquer_tri->setStyleSheet(QString::fromUtf8("background-color:rgb(53, 132, 228);"));

        sortLayout_5->addWidget(btn_appliquer_tri);

        btnResetSort_5 = new QPushButton(sortGroupBox_5);
        btnResetSort_5->setObjectName("btnResetSort_5");

        sortLayout_5->addWidget(btnResetSort_5);

        btnReinitMdp_6 = new QPushButton(page);
        btnReinitMdp_6->setObjectName("btnReinitMdp_6");
        btnReinitMdp_6->setGeometry(QRect(840, 230, 261, 41));
        btnReinitMdp_6->setMinimumSize(QSize(140, 35));
        btnReinitMdp_6->setStyleSheet(QString::fromUtf8("background-color:rgb(53, 132, 228);"));
        tableWidgetUsers_5 = new QTableWidget(page);
        if (tableWidgetUsers_5->columnCount() < 6)
            tableWidgetUsers_5->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetUsers_5->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetUsers_5->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidgetUsers_5->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidgetUsers_5->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidgetUsers_5->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidgetUsers_5->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        tableWidgetUsers_5->setObjectName("tableWidgetUsers_5");
        tableWidgetUsers_5->setGeometry(QRect(95, 380, 651, 192));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        stackedWidget->addWidget(page_2);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1165, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        sidebarLogo_4->setText(QCoreApplication::translate("MainWindow", "\360\237\221\201\357\270\217", nullptr));
#if QT_CONFIG(tooltip)
        btnUtilisateur_4->setToolTip(QCoreApplication::translate("MainWindow", "Utilisateurs", nullptr));
#endif // QT_CONFIG(tooltip)
        btnUtilisateur_4->setText(QCoreApplication::translate("MainWindow", "\360\237\221\244", nullptr));
#if QT_CONFIG(tooltip)
        btnClient_4->setToolTip(QCoreApplication::translate("MainWindow", "Clients", nullptr));
#endif // QT_CONFIG(tooltip)
        btnClient_4->setText(QCoreApplication::translate("MainWindow", "\360\237\221\245", nullptr));
#if QT_CONFIG(tooltip)
        btnRendezVous_4->setToolTip(QCoreApplication::translate("MainWindow", "Rendez-vous", nullptr));
#endif // QT_CONFIG(tooltip)
        btnRendezVous_4->setText(QCoreApplication::translate("MainWindow", "\360\237\223\205", nullptr));
#if QT_CONFIG(tooltip)
        btnProduit_4->setToolTip(QCoreApplication::translate("MainWindow", "Produits", nullptr));
#endif // QT_CONFIG(tooltip)
        btnProduit_4->setText(QCoreApplication::translate("MainWindow", "\360\237\233\215\357\270\217", nullptr));
#if QT_CONFIG(tooltip)
        btnFournisseur_4->setToolTip(QCoreApplication::translate("MainWindow", "Fournisseurs", nullptr));
#endif // QT_CONFIG(tooltip)
        btnFournisseur_4->setText(QCoreApplication::translate("MainWindow", "\360\237\217\242", nullptr));
        formGroupBox_5->setTitle(QCoreApplication::translate("MainWindow", "Formulaire Rendez-vous", nullptr));
        labelPrenom_6->setText(QCoreApplication::translate("MainWindow", "ID:", nullptr));
        labelMdp_6->setText(QCoreApplication::translate("MainWindow", "Heure:", nullptr));
        labelDate_6->setText(QCoreApplication::translate("MainWindow", "Date  :", nullptr));
        labelSalaire_6->setText(QCoreApplication::translate("MainWindow", "Client:", nullptr));
        roleGroupBox_6->setTitle(QCoreApplication::translate("MainWindow", "R\303\264le", nullptr));
        radioOpticien_6->setText(QCoreApplication::translate("MainWindow", "Opticien", nullptr));
        radioAssistant_6->setText(QCoreApplication::translate("MainWindow", "Assistant", nullptr));
        statusGroupBox_6->setTitle(QCoreApplication::translate("MainWindow", "Statut", nullptr));
        radioActif_6->setText(QCoreApplication::translate("MainWindow", "Confirme", nullptr));
        radioInactif_6->setText(QCoreApplication::translate("MainWindow", "Annuler", nullptr));
        radioButton_2->setText(QCoreApplication::translate("MainWindow", "En Attente", nullptr));
        btnAjouter_5->setText(QCoreApplication::translate("MainWindow", "\342\236\225 Ajouter", nullptr));
        btnsupprimer_5->setText(QCoreApplication::translate("MainWindow", "\360\237\224\204 Supprimer \303\251lement selectionner", nullptr));
        btnGenererPDF_5->setText(QCoreApplication::translate("MainWindow", "\360\237\223\212 G\303\251n\303\251rer PDF", nullptr));
        searchGroupBox_5->setTitle(QCoreApplication::translate("MainWindow", "Recherche et Filtrage", nullptr));
        labelSearch_5->setText(QCoreApplication::translate("MainWindow", "Rechercher :", nullptr));
        labelFilterBy_5->setText(QCoreApplication::translate("MainWindow", "Filtrer par :", nullptr));
        checkclient_5->setText(QCoreApplication::translate("MainWindow", "Client", nullptr));
        checkid_5->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        checkheure_5->setText(QCoreApplication::translate("MainWindow", "Heure", nullptr));
        checkRole_5->setText(QCoreApplication::translate("MainWindow", "R\303\264le", nullptr));
        checkstatut_5->setText(QCoreApplication::translate("MainWindow", "Statut", nullptr));
        checkdate_5->setText(QCoreApplication::translate("MainWindow", "Date", nullptr));
        btn_appliquer_recherche_2->setText(QCoreApplication::translate("MainWindow", "\360\237\224\204 Appliquer", nullptr));
        btnResetrech_6->setText(QCoreApplication::translate("MainWindow", "\360\237\227\221\357\270\217 Reset", nullptr));
        statsGroupBox_5->setTitle(QCoreApplication::translate("MainWindow", "\360\237\223\210 Statistiques Utilisateurs", nullptr));
        labelChartPlaceholder_5->setText(QCoreApplication::translate("MainWindow", "[Graphique des activit\303\251s]", nullptr));
        labelTotalUsers_5->setText(QCoreApplication::translate("MainWindow", "Total utilisateurs: 12", nullptr));
        labelActiveUsers_5->setText(QCoreApplication::translate("MainWindow", "Rendez_vous confirmer: 8", nullptr));
        labelInactiveUsers_5->setText(QCoreApplication::translate("MainWindow", "Rendez-vous annuler: 4", nullptr));
        labelRoleDistribution_5->setText(QCoreApplication::translate("MainWindow", "Opticiens: 7 | Assistants: 5", nullptr));
        sortGroupBox_5->setTitle(QCoreApplication::translate("MainWindow", "\360\237\224\275 Tri Avanc\303\251 des Utilisateurs", nullptr));
        labelSortBy_5->setText(QCoreApplication::translate("MainWindow", "Trier par :", nullptr));
        radioSortAsc_5->setText(QCoreApplication::translate("MainWindow", "Croissant (A-Z)", nullptr));
        radioSortDesc_5->setText(QCoreApplication::translate("MainWindow", "D\303\251croissant (Z-A)", nullptr));
        btn_appliquer_tri->setText(QCoreApplication::translate("MainWindow", "\360\237\224\204 Appliquer", nullptr));
        btnResetSort_5->setText(QCoreApplication::translate("MainWindow", "\360\237\227\221\357\270\217 Reset", nullptr));
        btnReinitMdp_6->setText(QCoreApplication::translate("MainWindow", "\360\237\224\204 Modifier", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetUsers_5->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetUsers_5->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Client", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetUsers_5->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Heure", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetUsers_5->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Date", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidgetUsers_5->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "Role", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidgetUsers_5->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "Statut", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
