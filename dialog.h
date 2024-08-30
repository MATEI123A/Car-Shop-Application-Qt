#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include<QVector>
#include<QPair>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    QVector<QPair<QString,QString>> pairVector;
    QString name_person,password;
    ~Dialog();

private slots:
    void on_signinbutton_clicked();

    void on_back_button_clicked();

    void on_lineEdit_name_returnPressed();

    void on_lineEdit_name_cursorPositionChanged(int arg1, int arg2);

    void on_lineEdit_password_cursorPositionChanged(int arg1, int arg2);

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
