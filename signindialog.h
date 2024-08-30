#ifndef SIGNINDIALOG_H
#define SIGNINDIALOG_H

#include <QDialog>

namespace Ui {
class SigninDialog;
}

class SigninDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SigninDialog(QWidget *parent = nullptr);
    ~SigninDialog();

private slots:
    void on_pushButton_2_clicked();

    void on_mainmenu_clicked();

    void on_login_button2_clicked();

private:
    Ui::SigninDialog *ui;
};

#endif // SIGNINDIALOG_H
