#ifndef ADDBOOK_H
#define ADDBOOK_H

#include <QDialog>
#include<QString>
#include<QDate>
namespace Ui {
class addBook;
}

class addBook : public QDialog
{
    Q_OBJECT

public:
    explicit addBook(QWidget *parent = nullptr);
    ~addBook();
    QString addBookN();
    QString addBookNum();
    QDate addPubD();
    QString addPubN();
    QString addWriterN();

private:
    Ui::addBook *ui;
};

#endif // ADDBOOK_H
