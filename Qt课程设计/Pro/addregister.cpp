#include "addregister.h"
#include "ui_addregister.h"

addRegister::addRegister(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addRegister)
{
    ui->setupUi(this);
}

addRegister::~addRegister()
{
    delete ui;
}
QString addRegister::addRegi()
{
    return ui->registerNum->text();
}
QString addRegister::bookName()

{
    return ui->bookName->text();
}
