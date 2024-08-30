/********************************************************************************
** Form generated from reading UI file 'questiondialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUESTIONDIALOG_H
#define UI_QUESTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_QuestionDialog
{
public:
    QLineEdit *question;
    QRadioButton *sport;
    QRadioButton *sedan;
    QRadioButton *suv;
    QPushButton *next;
    QRadioButton *sport2;
    QRadioButton *suv2;
    QRadioButton *radioButton_2;
    QRadioButton *sport3;
    QRadioButton *sedan3;
    QRadioButton *suv3;
    QLineEdit *recomandare;
    QLabel *audia4;
    QPushButton *mainmenu;
    QLabel *sclass;
    QFrame *line;
    QFrame *line_2;

    void setupUi(QDialog *QuestionDialog)
    {
        if (QuestionDialog->objectName().isEmpty())
            QuestionDialog->setObjectName("QuestionDialog");
        QuestionDialog->resize(570, 321);
        QuestionDialog->setStyleSheet(QString::fromUtf8("QDialog\n"
"{\n"
"	background-color:#353935;\n"
"}"));
        question = new QLineEdit(QuestionDialog);
        question->setObjectName("question");
        question->setGeometry(QRect(50, 80, 251, 41));
        question->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"\n"
"{\n"
"font: 700 italic 12pt \"Segoe UI\";\n"
"	border:0;\n"
"	color:white;\n"
"	background-color:transparent;\n"
"}"));
        sport = new QRadioButton(QuestionDialog);
        sport->setObjectName("sport");
        sport->setGeometry(QRect(50, 140, 231, 20));
        sport->setStyleSheet(QString::fromUtf8("QRadioButton\n"
"{\n"
"	color:white;\n"
"	\n"
"}"));
        sedan = new QRadioButton(QuestionDialog);
        sedan->setObjectName("sedan");
        sedan->setGeometry(QRect(50, 170, 251, 20));
        sedan->setStyleSheet(QString::fromUtf8("QRadioButton\n"
"{\n"
"	color:white;\n"
"	\n"
"}"));
        suv = new QRadioButton(QuestionDialog);
        suv->setObjectName("suv");
        suv->setGeometry(QRect(50, 200, 201, 20));
        suv->setStyleSheet(QString::fromUtf8("QRadioButton\n"
"{\n"
"	color:white;\n"
"	\n"
"}"));
        next = new QPushButton(QuestionDialog);
        next->setObjectName("next");
        next->setGeometry(QRect(410, 270, 81, 31));
        next->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border :2px solid white;\n"
"font: 700 10pt \"Segoe UI\";\n"
"background-color:transparent;\n"
"color:white;\n"
"style-font:bold;\n"
"}"));
        sport2 = new QRadioButton(QuestionDialog);
        sport2->setObjectName("sport2");
        sport2->setGeometry(QRect(50, 140, 89, 20));
        sport2->setStyleSheet(QString::fromUtf8("QRadioButton\n"
"{\n"
"	color:white;\n"
"	\n"
"}"));
        suv2 = new QRadioButton(QuestionDialog);
        suv2->setObjectName("suv2");
        suv2->setGeometry(QRect(50, 200, 89, 20));
        suv2->setStyleSheet(QString::fromUtf8("QRadioButton\n"
"{\n"
"	color:white;\n"
"	\n"
"}"));
        radioButton_2 = new QRadioButton(QuestionDialog);
        radioButton_2->setObjectName("radioButton_2");
        radioButton_2->setGeometry(QRect(50, 170, 89, 20));
        radioButton_2->setStyleSheet(QString::fromUtf8("QRadioButton\n"
"{\n"
"	color:white;\n"
"	\n"
"}"));
        sport3 = new QRadioButton(QuestionDialog);
        sport3->setObjectName("sport3");
        sport3->setGeometry(QRect(50, 140, 151, 20));
        sport3->setStyleSheet(QString::fromUtf8("QRadioButton\n"
"{\n"
"	color:white;\n"
"	\n"
"}"));
        sedan3 = new QRadioButton(QuestionDialog);
        sedan3->setObjectName("sedan3");
        sedan3->setGeometry(QRect(50, 170, 141, 20));
        sedan3->setStyleSheet(QString::fromUtf8("QRadioButton\n"
"{\n"
"	color:white;\n"
"	\n"
"}"));
        suv3 = new QRadioButton(QuestionDialog);
        suv3->setObjectName("suv3");
        suv3->setGeometry(QRect(50, 200, 141, 20));
        suv3->setStyleSheet(QString::fromUtf8("QRadioButton\n"
"{\n"
"	color:white;\n"
"	\n"
"}"));
        recomandare = new QLineEdit(QuestionDialog);
        recomandare->setObjectName("recomandare");
        recomandare->setGeometry(QRect(50, 50, 261, 22));
        recomandare->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"\n"
"{\n"
"font: 700 italic 12pt \"Segoe UI\";\n"
"	border:0;\n"
"	color:white;\n"
"	background-color:transparent;\n"
"}"));
        audia4 = new QLabel(QuestionDialog);
        audia4->setObjectName("audia4");
        audia4->setGeometry(QRect(50, 90, 221, 151));
        audia4->setPixmap(QPixmap(QString::fromUtf8("D:/test/a4facelift.jpg")));
        audia4->setScaledContents(true);
        mainmenu = new QPushButton(QuestionDialog);
        mainmenu->setObjectName("mainmenu");
        mainmenu->setGeometry(QRect(400, 260, 111, 31));
        mainmenu->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border :2px solid white;\n"
"font: 700 10pt \"Segoe UI\";\n"
"background-color:transparent;\n"
"color:white;\n"
"style-font:bold;\n"
"}"));
        sclass = new QLabel(QuestionDialog);
        sclass->setObjectName("sclass");
        sclass->setGeometry(QRect(50, 90, 251, 151));
        sclass->setPixmap(QPixmap(QString::fromUtf8("D:/test/mercedessclass.jpg")));
        sclass->setScaledContents(true);
        line = new QFrame(QuestionDialog);
        line->setObjectName("line");
        line->setGeometry(QRect(50, 110, 241, 16));
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        line_2 = new QFrame(QuestionDialog);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(50, 70, 271, 16));
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);

        retranslateUi(QuestionDialog);

        QMetaObject::connectSlotsByName(QuestionDialog);
    } // setupUi

    void retranslateUi(QDialog *QuestionDialog)
    {
        QuestionDialog->setWindowTitle(QCoreApplication::translate("QuestionDialog", "Dialog", nullptr));
        question->setText(QCoreApplication::translate("QuestionDialog", "What type of car do you prefer?", nullptr));
        sport->setText(QCoreApplication::translate("QuestionDialog", "Sport", nullptr));
        sedan->setText(QCoreApplication::translate("QuestionDialog", "Sedan", nullptr));
        suv->setText(QCoreApplication::translate("QuestionDialog", "Luxury", nullptr));
        next->setText(QCoreApplication::translate("QuestionDialog", "Next", nullptr));
        sport2->setText(QCoreApplication::translate("QuestionDialog", "180-350 HP", nullptr));
        suv2->setText(QCoreApplication::translate("QuestionDialog", "400-500 HP", nullptr));
        radioButton_2->setText(QCoreApplication::translate("QuestionDialog", "510-635 HP", nullptr));
        sport3->setText(QCoreApplication::translate("QuestionDialog", "40000-50000,- EUR", nullptr));
        sedan3->setText(QCoreApplication::translate("QuestionDialog", "52000-62000,- EUR", nullptr));
        suv3->setText(QCoreApplication::translate("QuestionDialog", "85000-120000,- EUR", nullptr));
        recomandare->setText(QCoreApplication::translate("QuestionDialog", "We recommend the car:", nullptr));
        audia4->setText(QString());
        mainmenu->setText(QCoreApplication::translate("QuestionDialog", "To Main Menu", nullptr));
        sclass->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QuestionDialog: public Ui_QuestionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUESTIONDIALOG_H
