#include "delregister.h"
#include "ui_delregister.h"

delRegister::delRegister(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::delRegister)
{
    ui->setupUi(this);
}

delRegister::~delRegister()
{
    delete ui;
}
QString delRegister::delBookN()
{
    return ui->bookName->text();
}
QString delRegister::delBookR()
{
    return ui->bookRegi->text();
}
