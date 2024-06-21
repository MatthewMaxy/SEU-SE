#include "deletebook.h"
#include "ui_deletebook.h"

deleteBook::deleteBook(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::deleteBook)
{
    ui->setupUi(this);
}

deleteBook::~deleteBook()
{
    delete ui;
}

QString deleteBook::delBookN()
{
    return ui->bookName->text();
}

