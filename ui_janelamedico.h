/********************************************************************************
** Form generated from reading UI file 'janelamedico.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JANELAMEDICO_H
#define UI_JANELAMEDICO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_janelaMedico
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEditLogin;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QLineEdit *lineEditSenha;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout_3;
    QPushButton *pushButtonLogin;
    QPushButton *pushButtonCancelar;

    void setupUi(QDialog *janelaMedico)
    {
        if (janelaMedico->objectName().isEmpty())
            janelaMedico->setObjectName("janelaMedico");
        janelaMedico->resize(285, 202);
        layoutWidget = new QWidget(janelaMedico);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 20, 170, 64));
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

        lineEditLogin = new QLineEdit(layoutWidget);
        lineEditLogin->setObjectName("lineEditLogin");

        gridLayout->addWidget(lineEditLogin, 0, 1, 1, 1);


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

        layoutWidget_2 = new QWidget(janelaMedico);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(20, 100, 168, 26));
        gridLayout_3 = new QGridLayout(layoutWidget_2);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButtonLogin = new QPushButton(layoutWidget_2);
        pushButtonLogin->setObjectName("pushButtonLogin");

        gridLayout_3->addWidget(pushButtonLogin, 0, 0, 1, 1);

        pushButtonCancelar = new QPushButton(layoutWidget_2);
        pushButtonCancelar->setObjectName("pushButtonCancelar");

        gridLayout_3->addWidget(pushButtonCancelar, 0, 1, 1, 1);

        QWidget::setTabOrder(lineEditLogin, lineEditSenha);
        QWidget::setTabOrder(lineEditSenha, pushButtonLogin);
        QWidget::setTabOrder(pushButtonLogin, pushButtonCancelar);

        retranslateUi(janelaMedico);

        QMetaObject::connectSlotsByName(janelaMedico);
    } // setupUi

    void retranslateUi(QDialog *janelaMedico)
    {
        janelaMedico->setWindowTitle(QCoreApplication::translate("janelaMedico", "Login m\303\251dico", nullptr));
        label->setText(QCoreApplication::translate("janelaMedico", "CRM", nullptr));
        label_2->setText(QCoreApplication::translate("janelaMedico", "Senha", nullptr));
        pushButtonLogin->setText(QCoreApplication::translate("janelaMedico", "Login", nullptr));
        pushButtonCancelar->setText(QCoreApplication::translate("janelaMedico", "Cancelar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class janelaMedico: public Ui_janelaMedico {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JANELAMEDICO_H
