/********************************************************************************
** Form generated from reading UI file 'janelapaciente.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JANELAPACIENTE_H
#define UI_JANELAPACIENTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_JanelaPaciente
{
public:
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout_3;
    QPushButton *pushButtonLogin;
    QPushButton *pushButtonCancelar;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEditCPF;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QLineEdit *lineEditSenha;

    void setupUi(QDialog *JanelaPaciente)
    {
        if (JanelaPaciente->objectName().isEmpty())
            JanelaPaciente->setObjectName("JanelaPaciente");
        JanelaPaciente->resize(310, 189);
        layoutWidget_2 = new QWidget(JanelaPaciente);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(30, 90, 168, 26));
        gridLayout_3 = new QGridLayout(layoutWidget_2);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButtonLogin = new QPushButton(layoutWidget_2);
        pushButtonLogin->setObjectName("pushButtonLogin");

        gridLayout_3->addWidget(pushButtonLogin, 0, 0, 1, 1);

        pushButtonCancelar = new QPushButton(layoutWidget_2);
        pushButtonCancelar->setObjectName("pushButtonCancelar");

        gridLayout_3->addWidget(pushButtonCancelar, 0, 1, 1, 1);

        layoutWidget = new QWidget(JanelaPaciente);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(30, 10, 170, 64));
        gridLayout_4 = new QGridLayout(layoutWidget);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(14);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEditCPF = new QLineEdit(layoutWidget);
        lineEditCPF->setObjectName("lineEditCPF");

        gridLayout->addWidget(lineEditCPF, 0, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        lineEditSenha = new QLineEdit(layoutWidget);
        lineEditSenha->setObjectName("lineEditSenha");
        lineEditSenha->setEchoMode(QLineEdit::Password);

        gridLayout_2->addWidget(lineEditSenha, 0, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout_2, 1, 0, 1, 1);

        QWidget::setTabOrder(lineEditCPF, lineEditSenha);
        QWidget::setTabOrder(lineEditSenha, pushButtonLogin);
        QWidget::setTabOrder(pushButtonLogin, pushButtonCancelar);

        retranslateUi(JanelaPaciente);

        QMetaObject::connectSlotsByName(JanelaPaciente);
    } // setupUi

    void retranslateUi(QDialog *JanelaPaciente)
    {
        JanelaPaciente->setWindowTitle(QCoreApplication::translate("JanelaPaciente", "Login paciente", nullptr));
        pushButtonLogin->setText(QCoreApplication::translate("JanelaPaciente", "Login", nullptr));
        pushButtonCancelar->setText(QCoreApplication::translate("JanelaPaciente", "Cancelar", nullptr));
        label->setText(QCoreApplication::translate("JanelaPaciente", "CPF", nullptr));
        label_2->setText(QCoreApplication::translate("JanelaPaciente", "Senha", nullptr));
    } // retranslateUi

};

namespace Ui {
    class JanelaPaciente: public Ui_JanelaPaciente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JANELAPACIENTE_H
