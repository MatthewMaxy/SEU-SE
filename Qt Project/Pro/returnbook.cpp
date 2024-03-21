#include "returnbook.h"
#include "ui_returnbook.h"

returnBook::returnBook(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::returnBook)
{
    ui->setupUi(this);
}

returnBook::~returnBook()
{
    delete ui;
}
QString returnBook::returnName()
{
    return ui->bookName->text();
}
QString returnBook::returnNum()
{
    return ui->registerNum->text();
}
