/********************************************************************************
** Form generated from reading UI file 'allcarsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALLCARSDIALOG_H
#define UI_ALLCARSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AllcarsDialog
{
public:
    QPushButton *backbutton;
    QLineEdit *carnameline;
    QLineEdit *lineEdit;
    QFrame *line;
    QLabel *audia4label;
    QLabel *audia6_label;
    QLabel *audia7_label;
    QLabel *bmw3er_label;
    QLabel *bmw5er_label;
    QLabel *bmw7er_label;

    void setupUi(QDialog *AllcarsDialog)
    {
        if (AllcarsDialog->objectName().isEmpty())
            AllcarsDialog->setObjectName("AllcarsDialog");
        AllcarsDialog->resize(564, 303);
        AllcarsDialog->setStyleSheet(QString::fromUtf8("QDialog\n"
"{\n"
"	background-color:#353935;\n"
"}"));
        backbutton = new QPushButton(AllcarsDialog);
        backbutton->setObjectName("backbutton");
        backbutton->setGeometry(QRect(460, 250, 75, 24));
        carnameline = new QLineEdit(AllcarsDialog);
        carnameline->setObjectName("carnameline");
        carnameline->setGeometry(QRect(130, 40, 121, 22));
        carnameline->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"	border:0;\n"
"	color:white;\n"
"	background-color:transparent;\n"
"}"));
        lineEdit = new QLineEdit(AllcarsDialog);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(52, 40, 81, 21));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"	border:0;\n"
"	color:white;\n"
"	background-color:transparent;\n"
"	font: 700 italic 10pt \"Segoe UI\";\n"
"}"));
        line = new QFrame(AllcarsDialog);
        line->setObjectName("line");
        line->setGeometry(QRect(50, 50, 191, 16));
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        audia4label = new QLabel(AllcarsDialog);
        audia4label->setObjectName("audia4label");
        audia4label->setGeometry(QRect(50, 70, 281, 141));
        audia4label->setPixmap(QPixmap(QString::fromUtf8("D:/test/audia4.jpg")));
        audia4label->setScaledContents(true);
        audia6_label = new QLabel(AllcarsDialog);
        audia6_label->setObjectName("audia6_label");
        audia6_label->setGeometry(QRect(50, 70, 281, 141));
        audia6_label->setPixmap(QPixmap(QString::fromUtf8("D:/test/audi_a6.jpg")));
        audia6_label->setScaledContents(true);
        audia7_label = new QLabel(AllcarsDialog);
        audia7_label->setObjectName("audia7_label");
        audia7_label->setGeometry(QRect(50, 70, 281, 141));
        audia7_label->setPixmap(QPixmap(QString::fromUtf8("D:/test/audia7.jpg")));
        audia7_label->setScaledContents(true);
        bmw3er_label = new QLabel(AllcarsDialog);
        bmw3er_label->setObjectName("bmw3er_label");
        bmw3er_label->setGeometry(QRect(50, 70, 281, 141));
        bmw3er_label->setPixmap(QPixmap(QString::fromUtf8("D:/test/bmw3er.jpg")));
        bmw3er_label->setScaledContents(true);
        bmw5er_label = new QLabel(AllcarsDialog);
        bmw5er_label->setObjectName("bmw5er_label");
        bmw5er_label->setGeometry(QRect(50, 70, 281, 141));
        bmw5er_label->setPixmap(QPixmap(QString::fromUtf8("D:/test/bmw5er.jpg")));
        bmw5er_label->setScaledContents(true);
        bmw7er_label = new QLabel(AllcarsDialog);
        bmw7er_label->setObjectName("bmw7er_label");
        bmw7er_label->setGeometry(QRect(50, 70, 281, 141));
        bmw7er_label->setPixmap(QPixmap(QString::fromUtf8("D:/test/bmw7er.jpg")));
        bmw7er_label->setScaledContents(true);

        retranslateUi(AllcarsDialog);

        QMetaObject::connectSlotsByName(AllcarsDialog);
    } // setupUi

    void retranslateUi(QDialog *AllcarsDialog)
    {
        AllcarsDialog->setWindowTitle(QCoreApplication::translate("AllcarsDialog", "Dialog", nullptr));
        backbutton->setText(QCoreApplication::translate("AllcarsDialog", "Back", nullptr));
        lineEdit->setText(QCoreApplication::translate("AllcarsDialog", "Your car is :", nullptr));
        audia4label->setText(QString());
        audia6_label->setText(QString());
        audia7_label->setText(QString());
        bmw3er_label->setText(QString());
        bmw5er_label->setText(QString());
        bmw7er_label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AllcarsDialog: public Ui_AllcarsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALLCARSDIALOG_H
