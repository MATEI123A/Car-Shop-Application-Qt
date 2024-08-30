
#ifndef SETDIALOG_H
#define SETDIALOG_H

#include <QDialog>

namespace Ui {
class SetDialog;
}

class SetDialog : public QDialog
{
    Q_OBJECT

public:
    QString nameper,pass;
    explicit SetDialog(QWidget *parent = nullptr);
    ~SetDialog();

private slots:
    void on_pushButton_clicked();

    void on_lineEdit_cursorPositionChanged(int arg1, int arg2);

    void on_lineEdit_2_cursorPositionChanged(int arg1, int arg2);

    void on_nameline_cursorPositionChanged(int arg1, int arg2);

    void on_passline_cursorPositionChanged(int arg1, int arg2);

    void on_pushButton_2_clicked();

private:
    Ui::SetDialog *ui;
};

#endif // SETDIALOG_H
