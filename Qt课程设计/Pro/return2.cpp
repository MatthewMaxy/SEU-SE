#include "return2.h"
#include "ui_return2.h"

return2::return2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::return2)
{
    ui->setupUi(this);
}

return2::~return2()
{
    delete ui;
}
QString return2::regiNum()
{
    return ui->registerNum->text();
}
