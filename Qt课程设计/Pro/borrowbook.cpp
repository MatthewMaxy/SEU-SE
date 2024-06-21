#include "borrowbook.h"
#include "ui_borrowbook.h"

borrowBook::borrowBook(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::borrowBook)
{
    ui->setupUi(this);
}

borrowBook::~borrowBook()
{
    delete ui;
}
QString borrowBook::borrowBookN()
{
    return ui->bookName->text();
}
