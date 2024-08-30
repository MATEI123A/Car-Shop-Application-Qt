#ifndef ALLCARSDIALOG_H
#define ALLCARSDIALOG_H

#include <QDialog>
#include<QString>

namespace Ui {
class AllcarsDialog;
}

class AllcarsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AllcarsDialog(QWidget *parent = nullptr);
    QString masina;
    int ok=0;
    ~AllcarsDialog();


private slots:
    void on_backbutton_clicked();

private:
    Ui::AllcarsDialog *ui;
};

#endif // ALLCARSDIALOG_H
