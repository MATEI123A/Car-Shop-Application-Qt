#include "questiondialog.h"
#include "ui_questiondialog.h"
#include<QVector>
#include"afterlogin.h"

QuestionDialog::QuestionDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::QuestionDialog)
{
    ui->setupUi(this);
  //  QVector<int> answers;
    int nr=1;
    ui->sport2->hide();
    ui->suv2->hide();
    ui->radioButton_2->hide();
    ui->sport3->hide();
    ui->sedan3->hide();
    ui->suv3->hide();
    ui->recomandare->hide();
    ui->audia4->hide();
    ui->mainmenu->hide();
    ui->sclass->hide();
    ui->line_2->hide();
}

QuestionDialog::~QuestionDialog()
{
    delete ui;
}

void QuestionDialog::on_sport_clicked()
{
    answers.push_back(0);
    ok1=1;
}


void QuestionDialog::on_sedan_clicked()
{
    answers.push_back(1);
    ok1=1;
}


void QuestionDialog::on_suv_clicked()
{
    answers.push_back(2);
    ok1=1;
}


void QuestionDialog::on_next_clicked()
{
    if(nr==1)
        ++nr;


    if(nr==2)
    {
        ui->question->setText("Choose the power of the engine : ");
        ui->question->show();
        ui->sport->hide();
        ui->suv->hide();
        ui->sedan->hide();
        ui->sport2->show();
        ui->suv2->show();
        ui->radioButton_2->show();
        ++nr;

     }
    else
    if(nr==3)
    {
        ui->sport2->hide();
        ui->suv2->hide();
        ui->radioButton_2->hide();
        ui->question->setText("Choose the prices interval : ");
        ui->question->show();
        ui->sport3->show();
        ui->sedan3->show();
        ui->suv3->show();
        ++nr;
    }
    else
    if(nr==4)
    {
        ui->sport->hide();
        ui->sedan->hide();
        ui->suv->hide();
        ui->sport2->hide();
        ui->suv2->hide();
        ui->radioButton_2->hide();
        ui->sport3->hide();
        ui->suv3->hide();
        ui->sedan3->hide();
        ui->question->hide();
        ui->next->hide();
        ui->line->hide();
        ui->line_2->show();

        qDebug()<<answers.size();

        ui->recomandare->show();
        ui->mainmenu->show();

        if(answers[0]==0 && answers[1]==0 && answers[2]==0)
        {
            ui->recomandare->setText("We recommand the car: Audi A4");
            ui->audia4->show();
        }

        if(answers[0]==2 && answers[1]==2 && answers[2]==2)
        {
            ui->recomandare->setText("We recommand the car: Mercedes S Class");
            ui->sclass->show();
        }
    }
}


void QuestionDialog::on_sport2_clicked()
{
    answers.push_back(0);
    ok2=1;
}


void QuestionDialog::on_suv2_clicked()
{
    answers.push_back(2);
    ok2=1;
}


void QuestionDialog::on_radioButton_2_clicked()
{
    answers.push_back(1);
    ok2=1;
}


void QuestionDialog::on_sport3_clicked()
{
    answers.push_back(0);
    ok3=1;
}


void QuestionDialog::on_sedan3_clicked()
{
    answers.push_back(1);
    ok3=1;
}


void QuestionDialog::on_suv3_clicked()
{
    answers.push_back(2);
    ok3=1;
}


void QuestionDialog::on_mainmenu_clicked()
{
    AfterLogin *a=new AfterLogin();
    a->show();
    this->hide();
}

