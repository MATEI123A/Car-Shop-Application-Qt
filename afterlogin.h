#ifndef AFTERLOGIN_H
#define AFTERLOGIN_H

#include <QDialog>
#include<QVector>
#include<QDebug>
#include <QLabel>

namespace Ui {
class AfterLogin;
}

class AfterLogin : public QDialog
{
    Q_OBJECT

public:
    explicit AfterLogin(QWidget *parent = nullptr);
    QLabel* label,*label1;
    int bmw=0,audi=0,mercedes=0;
    int nr=0;
    ~AfterLogin();

private slots:
    void on_audibutton_clicked();

    void on_a4button_clicked();

    void on_allcars_clicked();

    void on_a6button_clicked();

    void on_a7button_clicked();

    void on_bmwbutton_clicked();

    void on_namebuton_clicked();

    void on_logoutbuton_clicked();

    void on_mercedesbuton_clicked();

    void on_pushButton_clicked();

    void on_porschebuton_clicked();

private:
    Ui::AfterLogin *ui;
};

#endif // AFTERLOGIN_H

class Car {
public:
    QString car_name;

    Car(QString name)
    {
        this->car_name=name;
    }

    QString getName()
    {
        return car_name;
    }
};

class CarShop {
private:
    QString nume;

public:
     QVector<Car*> cars;
    CarShop& add_car(Car* car) {
        cars.push_back(car);
        return *this;
    }

    void delete_car(Car* car)
    {
        for (int i = 0; i < cars.size(); i++) {
            if (cars[i] == car) {
                delete cars[i];
                cars.remove(i);
                break;
            }
        }
    }

    void print()
    {
        for (int i = 0; i < cars.size(); i++) {
            qDebug() << carname(cars[i]);
        }
    }

    QString carname(Car* x)
    {
        return x->getName();
    }

    ~CarShop()
    {
        for (int i = 0; i < cars.size(); i++) {
            delete cars[i];
        }
    }
};


