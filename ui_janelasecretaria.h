/********************************************************************************
** Form generated from reading UI file 'janelasecretaria.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JANELASECRETARIA_H
#define UI_JANELASECRETARIA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_janelasecretaria
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout_3;
    QPushButton *pushButtonLogin;
    QPushButton *pushButtonCancelar;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEditLogin;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QLineEdit *lineEditSenha;

    void setupUi(QDialog *janelasecretaria)
    {
        if (janelasecretaria->objectName().isEmpty())
            janelasecretaria->setObjectName("janelasecretaria");
        janelasecretaria->resize(288, 223);
        layoutWidget = new QWidget(janelasecretaria);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(40, 120, 168, 26));
        gridLayout_3 = new QGridLayout(layoutWidget);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButtonLogin = new QPushButton(layoutWidget);
        pushButtonLogin->setObjectName("pushButtonLogin");

        gridLayout_3->addWidget(pushButtonLogin, 0, 0, 1, 1);

        pushButtonCancelar = new QPushButton(layoutWidget);
        pushButtonCancelar->setObjectName("pushButtonCancelar");

        gridLayout_3->addWidget(pushButtonCancelar, 0, 1, 1, 1);

        layoutWidget1 = new QWidget(janelasecretaria);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(40, 40, 170, 64));
        gridLayout_4 = new QGridLayout(layoutWidget1);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(layoutWidget1);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(14);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEditLogin = new QLineEdit(layoutWidget1);
        lineEditLogin->setObjectName("lineEditLogin");

        gridLayout->addWidget(lineEditLogin, 0, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        lineEditSenha = new QLineEdit(layoutWidget1);
        lineEditSenha->setObjectName("lineEditSenha");
        lineEditSenha->setEchoMode(QLineEdit::Password);

        gridLayout_2->addWidget(lineEditSenha, 0, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout_2, 1, 0, 1, 1);

        QWidget::setTabOrder(lineEditLogin, lineEditSenha);
        QWidget::setTabOrder(lineEditSenha, pushButtonLogin);
        QWidget::setTabOrder(pushButtonLogin, pushButtonCancelar);

        retranslateUi(janelasecretaria);

        QMetaObject::connectSlotsByName(janelasecretaria);
    } // setupUi

    void retranslateUi(QDialog *janelasecretaria)
    {
        janelasecretaria->setWindowTitle(QCoreApplication::translate("janelasecretaria", "Login secret\303\241ria", nullptr));
        pushButtonLogin->setText(QCoreApplication::translate("janelasecretaria", "Login", nullptr));
        pushButtonCancelar->setText(QCoreApplication::translate("janelasecretaria", "Cancelar", nullptr));
        label->setText(QCoreApplication::translate("janelasecretaria", "Login", nullptr));
        label_2->setText(QCoreApplication::translate("janelasecretaria", "Senha", nullptr));
    } // retranslateUi

};

namespace Ui {
    class janelasecretaria: public Ui_janelasecretaria {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JANELASECRETARIA_H
