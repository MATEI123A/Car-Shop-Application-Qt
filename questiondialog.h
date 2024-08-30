#ifndef QUESTIONDIALOG_H
#define QUESTIONDIALOG_H

#include <QDialog>
#include<QVector>

namespace Ui {
class QuestionDialog;
}

class QuestionDialog : public QDialog
{
    Q_OBJECT

public:
    explicit QuestionDialog(QWidget *parent = nullptr);
    QVector<int> answers;
    QVector<int> resp;
    int nr=1,ok1=0,ok2=0,ok3=0;
    ~QuestionDialog();

private slots:
    void on_sport_clicked();

    void on_sedan_clicked();

    void on_suv_clicked();

    void on_next_clicked();

    void on_sport2_clicked();

    void on_suv2_clicked();

    void on_radioButton_2_clicked();

    void on_sport3_clicked();

    void on_sedan3_clicked();

    void on_suv3_clicked();

    void on_mainmenu_clicked();

private:
    Ui::QuestionDialog *ui;
};

#endif // QUESTIONDIALOG_H
