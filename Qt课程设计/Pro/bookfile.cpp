#include "bookfile.h"

bookFile::bookFile()
{
}

Book& bookFile::getBook(int i)
{
    return bookSheet[i];
}
//增加书Y
bool bookFile::addBook(QString& name,QString& number ,QString& writer,QDate date,QString& pu)
{
    int x=0;
    if(find(name,x))
          return false;
    Book temp(name,number,writer,date,pu);
    bookFile::bookSheet.push_back(temp);
    return true;

}

//删除书Y
bool bookFile::deleteBook(QString &name)
{
        int x=0;
        if(!find(name,x))
            return false;
        QVector<Book>::Iterator it=bookFile::bookSheet.begin();
        for(;it!=bookSheet.end();++it)
        {
            if(it->getName()==name)
            {
                bookSheet.erase(it);
                break;
            }
        }
        return true;

}

//检查书能否借阅Y
bool bookFile::borrowCheck(QString & sign)//此处sign可能为书名也可能为书目编号
{
    for(int i=0;i<bookSheet.size();i++)
    {
        if(sign==bookSheet[i].getName()             //如果为书名且对应登记表可借数目大于0
                &&bookSheet[i].getStore()>0)
            return true;
        if(bookSheet[i].getNumber()==sign           //如果为数目编号且对应等级表可借数目大于0
                &&bookSheet[i].getStore()>0)
            return true;
    }
    return false;
}

//检查书能否借阅，并获得能借的书在bookSheet中下标x,能借的书登记号在bookR中下标y Y
bool bookFile::borrowCheck(QString &sign,int& x,int &y)
{
    for(int i=0;i<bookSheet.size();i++)
    {
        if((sign==bookSheet[i].getName()||sign==bookSheet[i].getNumber()) //检查书名或数目编号存在
                &&bookSheet[i].checkBook(y))                              //检查可借登记号存在，并赋值y
        {
            x=i;
            return true;
        }
    }
    return false;
}

//借书 Y
bool bookFile::borrow(QString & name, QString & num,QDate date)
{
    int x=0,z=0;
    if(!(borrowCheck(name,x,z)))    //判断能不能借，并得到可借登记号对应的x,y（borrowCheck函数中）
            return false;
    bookSheet[x].set(z,num,date);
    return true;

}

//还书（通过书名检索再通过登记号检索）  Y
bool bookFile::returnBook(QString& name,QString& num)
{
    int i=0;
    for(;i<bookSheet.size();i++)
        if(bookSheet[i].getName()==name)
            goto X;
    return false;
X:
    if(bookSheet[i].back(num))
        return true;
    return false;
}

//文件输出
bool bookFile::writeToFile(const QString& fileName)
{
    QFile myFile(fileName);
    if(!myFile.open(QIODevice::WriteOnly|QIODevice::Text))
        return false;
    QTextStream out(&myFile);
    out.setCodec(QTextCodec::codecForName("system"));
    out<<bookSheet.size()<<endl;
    for(int i=0;i<bookSheet.size();i++)
    {
        out<<bookSheet[i].getName()<<" ";
        out<<bookSheet[i].getNumber()<<" ";
        out<<bookSheet[i].getDate().year()<<" "<<bookSheet[i].getDate().month()<<" "<<bookSheet[i].getDate().day()<<" ";
        out<<bookSheet[i].getPub()<<" ";
        out<<bookSheet[i].getWriter()<<" ";
        out<<bookSheet[i].getStore()<<" ";
        out<<bookSheet[i].getT()<<endl;
        Book temp=bookSheet[i];
        for(int i=0;i<temp.getT();i++)
        {
            out<<temp.bookR[i].registerName<<" ";
            if(temp.bookR[i].borrowSign==true)
                out<<"in"<<" ";
            else
                out<<"out"<<" ";
            out<<temp.bookR[i].borrowDate.year()<<" "<<temp.bookR[i].borrowDate.month()<<" "<<temp.bookR[i].borrowDate.day()<<" ";
            out<<temp.bookR[i].borrowNumber<<endl;
        }

    }
    myFile.close();
    return true;

}

//通过书名或数目编号判断某本书是否存在并返回其在数组中下标
bool bookFile::find(QString & name, int & x)
{
    for(int i=0;i<bookSheet.size();i++)
        if(bookSheet[i].getName()==name||bookSheet[i].getNumber()==name)
        {
            x=i;
            return true;
        }
    return false;
}

//查询某登记号是否可用于当前booksheet中添加
bool bookFile::checkR(QString& num)
{
    for(int i=0;i<bookSheet.size();i++)
        for(int j=0;j<bookSheet[i].getT();j++)
            if(bookSheet[i].find(num))  //已经存在返回false（即不可添加）
               return false;
    return true;                        //不存在返回true（即可添加）
}

//添加登记号
bool bookFile::addRegi(QString & name, QString &num)
{
    int x=0;
    if(find(name,x)&&checkR(num))
        if(bookSheet[x].registerAdd(num))
            return true;
    return false;

}

//删除登记号
bool bookFile::delRegi(QString& name,QString&num)
{
    int x=0;
    if(find(name,x))
        if(bookSheet[x].registerDelete(num))
            return true;
    return false;
}

//检索某一登记号，并获取在booksheet中下标x和在bookR中下标y
bool bookFile::findR(QString &num, int &x, int &y)
{
    for(int i=0;i<bookSheet.size();i++)
       if(bookSheet[i].find(num,y))
          {
             x=i;
             return true;
          }
    return false;
}

//还书工具函数
bool bookFile::returnBook(int x,int y)
{
    if(bookSheet[x].back(y))
        return true;
    else
        return false;
}

//读取文件
bool bookFile::readFromFile(const QString & fileName)
{
    QFile myFile(fileName);
    if(!myFile.open(QIODevice::ReadOnly|QIODevice::Text))return false;
    QTextStream in(&myFile);
    in.setCodec(QTextCodec::codecForName("system"));
    QString bookName,bookNum,writerName,pubName;
    int year,month,day,bookStore,bookTotal;
    QString bookRegister,registerName,sign;
    int y,m,d,size;//size为书的种类数
    in>>size;
    for(int i=0;i<size;i++)
    {
        in>>bookName>>bookNum>>year>>month>>day>>pubName>>writerName>>bookStore>>bookTotal;
        QDate date(year,month,day);
        Book a(bookName,bookNum,writerName,date,pubName);
        for(int j=0;j<bookTotal;j++)
        {
            bool borrowSign;
            in>>bookRegister>>sign>>y>>m>>d>>registerName;
            if(sign=="out")
               borrowSign=false;
            if(sign=="in")
               borrowSign=true;
            QDate date2(y,m,d);
            a.registerAdd(bookRegister);
            a.bookR[j].borrowDate=date2;
            a.bookR[j].borrowNumber=registerName;
            a.bookR[j].borrowSign=borrowSign;

        }
        bookSheet.push_back(a);
    }
    myFile.close();
    return true;
}













