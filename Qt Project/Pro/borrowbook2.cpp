#include "borrowbook2.h"
#include "ui_borrowbook2.h"

borrowBook2::borrowBook2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::borrowBook2)
{
    ui->setupUi(this);
}

borrowBook2::~borrowBook2()
{
    delete ui;
}
QString borrowBook2::borrowNum()
{
    return ui->borrowNum->text();
}

QDate borrowBook2::borrowDate()
{
    return ui->borrowDate->date();
}

