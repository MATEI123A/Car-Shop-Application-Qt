/********************************************************************************
** Form generated from reading UI file 'setdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETDIALOG_H
#define UI_SETDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SetDialog
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *nameline;
    QLineEdit *passline;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *errorlogin;

    void setupUi(QDialog *SetDialog)
    {
        if (SetDialog->objectName().isEmpty())
            SetDialog->setObjectName("SetDialog");
        SetDialog->resize(661, 357);
        SetDialog->setStyleSheet(QString::fromUtf8(""));
        pushButton = new QPushButton(SetDialog);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(480, 290, 101, 31));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border :2px solid white;\n"
"font: 700 10pt \"Segoe UI\";\n"
"background-color:transparent;\n"
"color:white;\n"
"style-font:bold;\n"
"}"));
        pushButton_2 = new QPushButton(SetDialog);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(40, 200, 81, 31));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border :2px solid white;\n"
"font: 700 10pt \"Segoe UI\";\n"
"background-color:transparent;\n"
"color:white;\n"
"style-font:bold;\n"
"}"));
        nameline = new QLineEdit(SetDialog);
        nameline->setObjectName("nameline");
        nameline->setGeometry(QRect(40, 80, 113, 22));
        passline = new QLineEdit(SetDialog);
        passline->setObjectName("passline");
        passline->setGeometry(QRect(40, 140, 113, 22));
        passline->setEchoMode(QLineEdit::Password);
        lineEdit_3 = new QLineEdit(SetDialog);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(40, 50, 113, 22));
        lineEdit_3->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"    font: 700 11pt \"Segoe UI\";\n"
"	border:0px;\n"
"	background-color:transparent;\n"
"	color:white;\n"
"}"));
        lineEdit_4 = new QLineEdit(SetDialog);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(40, 110, 113, 22));
        lineEdit_4->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"    font: 700 11pt \"Segoe UI\";\n"
"	border:0px;\n"
"	background-color:transparent;\n"
"	color:white;\n"
"}"));
        errorlogin = new QLineEdit(SetDialog);
        errorlogin->setObjectName("errorlogin");
        errorlogin->setGeometry(QRect(40, 160, 161, 22));
        errorlogin->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"	border:0px;\n"
"	background-color:transparent;\n"
"	color:red;\n"
"}"));

        retranslateUi(SetDialog);

        QMetaObject::connectSlotsByName(SetDialog);
    } // setupUi

    void retranslateUi(QDialog *SetDialog)
    {
        SetDialog->setWindowTitle(QCoreApplication::translate("SetDialog", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("SetDialog", "Back", nullptr));
        pushButton_2->setText(QCoreApplication::translate("SetDialog", "Log In", nullptr));
        lineEdit_3->setText(QCoreApplication::translate("SetDialog", "Name", nullptr));
        lineEdit_4->setText(QCoreApplication::translate("SetDialog", "Password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SetDialog: public Ui_SetDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETDIALOG_H
