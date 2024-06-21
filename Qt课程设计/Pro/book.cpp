#include "book.h"

Book::Book()
{
    m_bookName="";
    m_bookNumber="";
    m_writerName="";
    m_publishingHouse="";
    m_bookStore=0;
}
Book::Book(QString& name,QString& number ,QString& writer,QDate date,QString& pu)
{
    m_bookName=name;
    m_bookNumber=number;
    m_writerName=writer;
    m_publishDate=date;
    m_publishingHouse=pu;
    m_bookStore=0;
}


//查找判断登记号是否存在(*存在返回true，不存在返回flase*）Y
bool Book::find(QString& name)
{
    for(int i=0;i<bookR.size();i++)
        if(bookR[i].registerName==name)
            return true;
    return false;
}

//查找并返回可借阅书序列的下标Y
bool Book::checkBook(int& x)
{
    for(int i=0;i<bookR.size();i++)
        if(bookR[i].borrowSign==true)
        {
            x=i;
            return true;
        }
    return false;
}

//一系列private获取
QString Book::getName()
{
    return m_bookName;
}
int Book::getStore()
{
    return m_bookStore;
}
QString Book::getWriter()
{
    return m_writerName;
}
QDate Book::getDate()
{
    return m_publishDate;
}
QString Book::getPub()
{
    return m_publishingHouse;
}
QString Book::getNumber()
{
    return m_bookNumber;
}
int Book::getT()
{
    return bookR.size();
}

//借书操作（配合通过bookfile中借书操作进行）Y
void Book::set(int i,QString& num,QDate date)
{
    m_bookStore-=m_bookStore;
    bookR[i].borrowNumber=num;
    bookR[i].borrowSign=false;
    bookR[i].borrowDate=date;
}


//增加登记信息Y
bool Book::registerAdd(QString& name )
{
    if(find(name))
        return false;            //检查该登记信息是否已存在（即检测登记号是否重复）
    bookRegister temp;
    temp.registerName=name;
    temp.borrowSign=true;
    temp.borrowNumber="*****";
    Book::bookR.push_back(temp);    //向登记号数据集中增加对象
    m_bookStore++;
    return true;

}

//删除登记信息Y
bool Book::registerDelete(QString & name)
{
    if(!(find(name)))
        return false;
    QVector<bookRegister>::Iterator it=Book::bookR.begin();
                                                            //利用迭代器确定该登记信息位置并删除相应信息
    for(;it!=bookR.end();++it)
    {
        if(it->registerName==name)
        {
            bookR.erase(it);
            break;
        }
    }
    return true;
}

//还书操作Y
bool Book::back(int x)
{
    if(bookR[x].borrowSign==true)
        return false;
    bookR[x].borrowSign=true;
    bookR[x].borrowNumber="******";
    return true;
}

bool Book::back(QString & num)
{
    int i=0;
    for(;i<bookR.size();i++)
        if(bookR[i].registerName==num               //登记信息与输入相同且状态为借出
                &&bookR[i].borrowSign==false)
            goto L;
    return false;
 L: bookR[i].borrowSign=true;
    bookR[i].borrowNumber="******";
    return true;
}


//检索登记号，并获取登记号在bookR中的位置
bool Book::find(QString & name, int & x)
{
    for(int i=0;i<bookR.size();i++)
        if(bookR[i].registerName==name)
        {
            x=i;
            return true;
        }
    return false;
}








