
#ifndef BOOK_H
#define BOOK_H
#include<QString>
#include<QVector>
#include<QFile>
#include<QTextStream>
#include<QDate>
#include<QTextCodec>
using namespace std;




typedef struct bookRegister //登记册表结构体
{
    QString     registerName;  //登记号
    bool        borrowSign;       //判断书籍是否借出
    QString     borrowNumber;  //借书证号
    QDate       borrowDate;       //借阅日期

}bookRegister;

class Book
{
public:

    Book();
    Book(QString&,QString&,QString&,QDate,QString&);//书本构造函数
    bool registerAdd(QString&);//添加登记信息
    bool find(QString&);
    bool find(QString&,int&);
    bool checkBook(int&);//
    bool registerDelete(QString&);
    QString getName();
    int getStore();
    QString getWriter();
    QDate getDate();
    QString getPub();
    void set(int,QString&,QDate );
    bool back(int);
    QString getNumber();
    int getT();
    bool back(QString &);
    QVector<bookRegister> bookR;


private:
    QString     m_bookName;//书名
    QString     m_bookNumber;//书目编号
    QString     m_writerName;
    QDate       m_publishDate;
    QString     m_publishingHouse;
    int         m_bookStore;//可借数


};

#endif // BOOK_H
