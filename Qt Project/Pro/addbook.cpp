#include "addbook.h"
#include "ui_addbook.h"

addBook::addBook(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addBook)
{
    ui->setupUi(this);
}

addBook::~addBook()
{
    delete ui;
}
QString addBook::addBookN()
{
    return ui->bookName->text();
}
QString addBook::addBookNum()
{
    return ui->bookNum->text();
}
QDate addBook::addPubD()
{
    return ui->pubDate->date();
}
QString addBook::addPubN()
{
    return ui->pubName->text();
}
QString addBook::addWriterN()
{
    return ui->writerName->text();
}
