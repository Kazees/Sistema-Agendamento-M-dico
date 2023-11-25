/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout;
    QPushButton *pushButtonSecretaria;
    QPushButton *pushButtonMedico;
    QPushButton *pushButtonPaciente;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButtonCadastrarSec;
    QPushButton *pushButtonCadastrarMed;
    QPushButton *pushButtonCadastrarPac;
    QPushButton *pushButtonConsultarSec;
    QPushButton *pushButtonConsultarMed;
    QPushButton *pushButtonConsultarPac;
    QPushButton *pushButtonExcluir;
    QPushButton *pushButtonCriar;
    QTextEdit *textEditSaida;
    QWidget *layoutWidget_3;
    QGridLayout *gridLayout_10;
    QLabel *label_8;
    QLineEdit *lineEditCPF;
    QWidget *layoutWidget_4;
    QGridLayout *gridLayout_11;
    QLabel *label_9;
    QLineEdit *lineEditEmail;
    QWidget *layoutWidget_5;
    QGridLayout *gridLayout_12;
    QLabel *label_10;
    QLineEdit *lineEditTelefone;
    QWidget *layoutWidget_7;
    QGridLayout *gridLayout_14;
    QLabel *label_11;
    QLineEdit *lineEditWpp;
    QWidget *layoutWidget_8;
    QGridLayout *gridLayout_15;
    QLabel *label_12;
    QLineEdit *lineEditNome;
    QWidget *layoutWidget_9;
    QGridLayout *gridLayout_16;
    QLabel *label_13;
    QLineEdit *lineEditMatricula;
    QWidget *layoutWidget_10;
    QGridLayout *gridLayout_17;
    QLabel *label_14;
    QLineEdit *lineEditCargo;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(769, 524);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        layoutWidget_2 = new QWidget(centralwidget);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(70, 10, 254, 26));
        gridLayout = new QGridLayout(layoutWidget_2);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonSecretaria = new QPushButton(layoutWidget_2);
        pushButtonSecretaria->setObjectName("pushButtonSecretaria");

        gridLayout->addWidget(pushButtonSecretaria, 0, 0, 1, 1);

        pushButtonMedico = new QPushButton(layoutWidget_2);
        pushButtonMedico->setObjectName("pushButtonMedico");

        gridLayout->addWidget(pushButtonMedico, 0, 1, 1, 1);

        pushButtonPaciente = new QPushButton(layoutWidget_2);
        pushButtonPaciente->setObjectName("pushButtonPaciente");

        gridLayout->addWidget(pushButtonPaciente, 0, 2, 1, 1);

        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(140, 40, 130, 236));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonCadastrarSec = new QPushButton(layoutWidget);
        pushButtonCadastrarSec->setObjectName("pushButtonCadastrarSec");

        verticalLayout->addWidget(pushButtonCadastrarSec);

        pushButtonCadastrarMed = new QPushButton(layoutWidget);
        pushButtonCadastrarMed->setObjectName("pushButtonCadastrarMed");

        verticalLayout->addWidget(pushButtonCadastrarMed);

        pushButtonCadastrarPac = new QPushButton(layoutWidget);
        pushButtonCadastrarPac->setObjectName("pushButtonCadastrarPac");

        verticalLayout->addWidget(pushButtonCadastrarPac);

        pushButtonConsultarSec = new QPushButton(layoutWidget);
        pushButtonConsultarSec->setObjectName("pushButtonConsultarSec");

        verticalLayout->addWidget(pushButtonConsultarSec);

        pushButtonConsultarMed = new QPushButton(layoutWidget);
        pushButtonConsultarMed->setObjectName("pushButtonConsultarMed");

        verticalLayout->addWidget(pushButtonConsultarMed);

        pushButtonConsultarPac = new QPushButton(layoutWidget);
        pushButtonConsultarPac->setObjectName("pushButtonConsultarPac");

        verticalLayout->addWidget(pushButtonConsultarPac);

        pushButtonExcluir = new QPushButton(layoutWidget);
        pushButtonExcluir->setObjectName("pushButtonExcluir");

        verticalLayout->addWidget(pushButtonExcluir);

        pushButtonCriar = new QPushButton(layoutWidget);
        pushButtonCriar->setObjectName("pushButtonCriar");

        verticalLayout->addWidget(pushButtonCriar);

        textEditSaida = new QTextEdit(centralwidget);
        textEditSaida->setObjectName("textEditSaida");
        textEditSaida->setGeometry(QRect(40, 280, 371, 191));
        textEditSaida->setReadOnly(true);
        layoutWidget_3 = new QWidget(centralwidget);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(460, 10, 148, 28));
        gridLayout_10 = new QGridLayout(layoutWidget_3);
        gridLayout_10->setObjectName("gridLayout_10");
        gridLayout_10->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget_3);
        label_8->setObjectName("label_8");
        QFont font;
        font.setPointSize(14);
        label_8->setFont(font);

        gridLayout_10->addWidget(label_8, 0, 0, 1, 1);

        lineEditCPF = new QLineEdit(layoutWidget_3);
        lineEditCPF->setObjectName("lineEditCPF");

        gridLayout_10->addWidget(lineEditCPF, 0, 1, 1, 1);

        layoutWidget_4 = new QWidget(centralwidget);
        layoutWidget_4->setObjectName("layoutWidget_4");
        layoutWidget_4->setGeometry(QRect(460, 70, 170, 28));
        gridLayout_11 = new QGridLayout(layoutWidget_4);
        gridLayout_11->setObjectName("gridLayout_11");
        gridLayout_11->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget_4);
        label_9->setObjectName("label_9");
        label_9->setFont(font);

        gridLayout_11->addWidget(label_9, 0, 0, 1, 1);

        lineEditEmail = new QLineEdit(layoutWidget_4);
        lineEditEmail->setObjectName("lineEditEmail");

        gridLayout_11->addWidget(lineEditEmail, 0, 1, 1, 1);

        layoutWidget_5 = new QWidget(centralwidget);
        layoutWidget_5->setObjectName("layoutWidget_5");
        layoutWidget_5->setGeometry(QRect(460, 100, 187, 28));
        gridLayout_12 = new QGridLayout(layoutWidget_5);
        gridLayout_12->setObjectName("gridLayout_12");
        gridLayout_12->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(layoutWidget_5);
        label_10->setObjectName("label_10");
        label_10->setFont(font);

        gridLayout_12->addWidget(label_10, 0, 0, 1, 1);

        lineEditTelefone = new QLineEdit(layoutWidget_5);
        lineEditTelefone->setObjectName("lineEditTelefone");

        gridLayout_12->addWidget(lineEditTelefone, 0, 1, 1, 1);

        layoutWidget_7 = new QWidget(centralwidget);
        layoutWidget_7->setObjectName("layoutWidget_7");
        layoutWidget_7->setGeometry(QRect(460, 130, 305, 28));
        gridLayout_14 = new QGridLayout(layoutWidget_7);
        gridLayout_14->setObjectName("gridLayout_14");
        gridLayout_14->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(layoutWidget_7);
        label_11->setObjectName("label_11");
        label_11->setFont(font);

        gridLayout_14->addWidget(label_11, 0, 0, 1, 1);

        lineEditWpp = new QLineEdit(layoutWidget_7);
        lineEditWpp->setObjectName("lineEditWpp");

        gridLayout_14->addWidget(lineEditWpp, 0, 1, 1, 1);

        layoutWidget_8 = new QWidget(centralwidget);
        layoutWidget_8->setObjectName("layoutWidget_8");
        layoutWidget_8->setGeometry(QRect(460, 40, 167, 28));
        gridLayout_15 = new QGridLayout(layoutWidget_8);
        gridLayout_15->setObjectName("gridLayout_15");
        gridLayout_15->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(layoutWidget_8);
        label_12->setObjectName("label_12");
        label_12->setFont(font);

        gridLayout_15->addWidget(label_12, 0, 0, 1, 1);

        lineEditNome = new QLineEdit(layoutWidget_8);
        lineEditNome->setObjectName("lineEditNome");

        gridLayout_15->addWidget(lineEditNome, 0, 1, 1, 1);

        layoutWidget_9 = new QWidget(centralwidget);
        layoutWidget_9->setObjectName("layoutWidget_9");
        layoutWidget_9->setGeometry(QRect(460, 170, 295, 28));
        gridLayout_16 = new QGridLayout(layoutWidget_9);
        gridLayout_16->setObjectName("gridLayout_16");
        gridLayout_16->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(layoutWidget_9);
        label_13->setObjectName("label_13");
        label_13->setFont(font);

        gridLayout_16->addWidget(label_13, 0, 0, 1, 1);

        lineEditMatricula = new QLineEdit(layoutWidget_9);
        lineEditMatricula->setObjectName("lineEditMatricula");

        gridLayout_16->addWidget(lineEditMatricula, 0, 1, 1, 1);

        layoutWidget_10 = new QWidget(centralwidget);
        layoutWidget_10->setObjectName("layoutWidget_10");
        layoutWidget_10->setGeometry(QRect(460, 200, 167, 28));
        gridLayout_17 = new QGridLayout(layoutWidget_10);
        gridLayout_17->setObjectName("gridLayout_17");
        gridLayout_17->setContentsMargins(0, 0, 0, 0);
        label_14 = new QLabel(layoutWidget_10);
        label_14->setObjectName("label_14");
        label_14->setFont(font);

        gridLayout_17->addWidget(label_14, 0, 0, 1, 1);

        lineEditCargo = new QLineEdit(layoutWidget_10);
        lineEditCargo->setObjectName("lineEditCargo");

        gridLayout_17->addWidget(lineEditCargo, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 769, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        QWidget::setTabOrder(lineEditCPF, lineEditNome);
        QWidget::setTabOrder(lineEditNome, lineEditEmail);
        QWidget::setTabOrder(lineEditEmail, lineEditTelefone);
        QWidget::setTabOrder(lineEditTelefone, lineEditWpp);
        QWidget::setTabOrder(lineEditWpp, lineEditMatricula);
        QWidget::setTabOrder(lineEditMatricula, lineEditCargo);
        QWidget::setTabOrder(lineEditCargo, pushButtonConsultarMed);
        QWidget::setTabOrder(pushButtonConsultarMed, pushButtonConsultarPac);
        QWidget::setTabOrder(pushButtonConsultarPac, pushButtonExcluir);
        QWidget::setTabOrder(pushButtonExcluir, textEditSaida);
        QWidget::setTabOrder(textEditSaida, pushButtonSecretaria);
        QWidget::setTabOrder(pushButtonSecretaria, pushButtonPaciente);
        QWidget::setTabOrder(pushButtonPaciente, pushButtonCadastrarSec);
        QWidget::setTabOrder(pushButtonCadastrarSec, pushButtonCadastrarMed);
        QWidget::setTabOrder(pushButtonCadastrarMed, pushButtonMedico);
        QWidget::setTabOrder(pushButtonMedico, pushButtonCadastrarPac);
        QWidget::setTabOrder(pushButtonCadastrarPac, pushButtonConsultarSec);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "SCAM", nullptr));
        pushButtonSecretaria->setText(QCoreApplication::translate("MainWindow", "Secret\303\241ria", nullptr));
        pushButtonMedico->setText(QCoreApplication::translate("MainWindow", "M\303\251dico", nullptr));
        pushButtonPaciente->setText(QCoreApplication::translate("MainWindow", "Paciente", nullptr));
        pushButtonCadastrarSec->setText(QCoreApplication::translate("MainWindow", "Cadastrar secret\303\241ria", nullptr));
        pushButtonCadastrarMed->setText(QCoreApplication::translate("MainWindow", "Cadastrar m\303\251dico", nullptr));
        pushButtonCadastrarPac->setText(QCoreApplication::translate("MainWindow", "Cadastrar paciente", nullptr));
        pushButtonConsultarSec->setText(QCoreApplication::translate("MainWindow", "Consultar Secret\303\241ria", nullptr));
        pushButtonConsultarMed->setText(QCoreApplication::translate("MainWindow", "Consultar M\303\251dico", nullptr));
        pushButtonConsultarPac->setText(QCoreApplication::translate("MainWindow", "Consultar Paciente", nullptr));
        pushButtonExcluir->setText(QCoreApplication::translate("MainWindow", "Excluir", nullptr));
        pushButtonCriar->setText(QCoreApplication::translate("MainWindow", "Criar arquivo", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "CPF", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "E-mail", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Telefone", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Contato de de WhatsApp", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Nome", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "N\303\272mero de matr\303\255cula", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Cargo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
