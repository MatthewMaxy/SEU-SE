#ifndef BOOKFILE_H
#define BOOKFILE_H
#include"book.h"
using namespace std;
class bookFile
{
public:
    bookFile();
    bool addBook(QString&,QString&,QString&,QDate,QString&);//
    bool borrowCheck(QString&);
    bool borrowCheck(QString&,int&,int&);
    bool deleteBook(QString&);//
    bool find(QString&,int&);
    bool borrow(QString&,QString&,QDate);//
    bool returnBook(QString &,QString&);
    bool writeToFile(const QString&);
    bool addRegi(QString&,QString&);
    bool delRegi(QString&,QString&);
    bool checkR(QString&);
    bool findR(QString&,int&,int&);
    bool returnBook(int ,int );
    bool readFromFile(const QString&);
    Book& getBook(int i);

    QVector<Book> bookSheet;

};

#endif // BOOKFILE_H
