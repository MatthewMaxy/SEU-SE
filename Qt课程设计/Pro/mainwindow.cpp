#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    bookInforModel = new QStandardItemModel;
    ui->bookTable->setModel(bookInforModel);
    connect(ui->bookTable->itemDelegate(), &QAbstractItemDelegate::closeEditor, this, &MainWindow::on_ShowInfotableView_changed);

    m_iCurTable = 0;
}
void MainWindow::resizeEvent(QResizeEvent *event)
{
    //父类的保持
    QMainWindow::resizeEvent(event);

    int x = this->frameGeometry().width();
    int y = this->frameGeometry().height();

    //窗口改变大小的时候列表控件跟着改变
    ui->bookTable->setGeometry(5,5,x*0.99,y*0.99);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionadd_triggered()
{
    addBook a(this);
    int ret=a.exec();
    if(ret==QDialog::Accepted)
    {
        QString bookN=a.addBookN();
        QString bookNum=a.addBookNum();
        QString pubN=a.addPubN();
        QDate date=a.addPubD();
        QString writerN=a.addWriterN();
        bool check=m_bookFile.addBook(bookN,bookNum,writerN,date,pubN);
        QMessageBox qmb;
        qmb.setWindowTitle("提示");
        if(check)
        {
            qmb.setText("添加成功");
        }
        else
            qmb.setText("添加失败，该书籍已存在，可添加借阅号");
        qmb.exec();
    }
    ShowBookTable();
}

void MainWindow::on_actiondelete_triggered()
{
    deleteBook a(this);
    int ret=a.exec();
    if(ret==QDialog::Accepted)
    {
        QString bookN=a.delBookN();
        bool check=m_bookFile.deleteBook(bookN);
        QMessageBox qmb;
        qmb.setWindowTitle("提示");
        if(check)
        {
            qmb.setText("删除成功");
        }
        else
            qmb.setText("删除失败，不存在该书籍");
        qmb.exec();
    }
    ShowBookTable();
}


void MainWindow::on_addReg_triggered()
{
    addRegister a(this);
    int ret=a.exec();
    if(ret==QDialog::Accepted)
    {
        QString name=a.bookName();
        QString num=a.addRegi();
        bool check=m_bookFile.addRegi(name,num);
        QMessageBox qmb;
        qmb.setWindowTitle("提示");
        if(check)
        {
            qmb.setText("添加成功");
            ShowBookTable();
        }
        else
            qmb.setText("添加失败，登记号重复或书籍不存在");
        qmb.exec();
    }
}



void MainWindow::on_delReg_triggered()
{
    delRegister a(this);
    int ret=a.exec();
    if(ret==QDialog::Accepted)
    {
        QString name=a.delBookN();
        QString num=a.delBookR();
        bool check=m_bookFile.delRegi(name,num);
        QMessageBox qmb;
        qmb.setWindowTitle("提示");
        if(check)
        {
            qmb.setText("删除成功");
            ShowBookTable();
        }
        else
            qmb.setText("删除失败，该书籍对应登记号不存在");
        qmb.exec();
    }
}

void MainWindow::on_borrowB_triggered()
{
    borrowBook a(this);
    int ret=a.exec();
    QMessageBox qmb;
    qmb.setWindowTitle("提示");
    if(ret==QDialog::Accepted)
    {
        int x=0,y=0;
        QString name=a.borrowBookN();
        bool check=m_bookFile.borrowCheck(name,x,y);
        if(check)
        {
            ShowRegisterTable(x);
            borrowBook2 b(this);
            int ret2=b.exec();
            if(ret2==QDialog::Accepted)
            {
                QString num=b.borrowNum();
                QDate date=b.borrowDate();
                m_bookFile.borrow(name,num,date);
                qmb.setText("借阅成功");
                ShowRegisterTable(x);
                qmb.exec();

            }
        }
        else
        {
            qmb.setText("暂无可借阅");
            qmb.exec();

         }

    }

}

void MainWindow::on_returnB_triggered()
{
    int x=0,y=0;
    returnBook a(this);
    int ret=a.exec();
    QMessageBox qmb;
    qmb.setWindowTitle("提示");
    if(ret==QDialog::Accepted)
    {
        QString name=a.returnName();
        QString num=a.returnNum();
        if(num!=""&&name!="")
        {
            if(m_bookFile.returnBook(name,num))
            {
                qmb.setText("还书成功");
                int x=0;
                m_bookFile.find(name,x);
                ShowRegisterTable(x);
            }
            else
                qmb.setText("还书失败");
            qmb.exec();
        }
        if(num!=""&&name==""&&m_bookFile.findR(num,x,y))
        {
            if(m_bookFile.returnBook(x,y))
            {
                qmb.setText("还书成功");
                ShowRegisterTable(x);
            }
            else
                qmb.setText("还书失败");
            qmb.exec();
        }
        if(num==""&&name!="")
        {
            int x=0;
            if(m_bookFile.find(name,x))
            {
                ShowRegisterTable(x);
                return2 b(this);
                int ret2=b.exec();
                if(ret2==QDialog::Accepted)
                {
                    QString num=b.regiNum();
                    if(m_bookFile.returnBook(name,num))
                    {
                        qmb.setText("还书成功");
                        ShowRegisterTable(x);
                    }
                    else
                        qmb.setText("还书失败");
                    qmb.exec();
                }      
            }
        }

    } 
}

void MainWindow::on_save_triggered()
{
    QString curPath=QDir::currentPath();
    QString dlgtitle="另存为一个文件";
    QString filter="文本文件(*.txt);;所有文件(*.*)";
    QString aFileName=QFileDialog::getSaveFileName(this,dlgtitle,curPath,filter);
    if(aFileName.isEmpty())
        return;
    m_bookFile.writeToFile(aFileName);
}


void MainWindow::on_open_triggered()
{
    QString curPath=QDir::currentPath();
    QString dlgTitle="选择一个文件";
    QString filter="文本文件(*.txt);;所有文件(*.*)";
    QString aFileName=QFileDialog::getOpenFileName(this,dlgTitle,curPath,filter);
    if(aFileName.isEmpty())
        return;
    m_bookFile.readFromFile(aFileName);
    ShowBookTable();
}


void MainWindow::ShowBookTable()
{
    ui->bookTable->setAlternatingRowColors(true);   //表格隔行变色便于阅读
    m_iCurTable = 1; //表示当前显示的是书籍信息
    bookInforModel->clear();
    bookInforModel->setColumnCount(6); //6列
    QStringList templist;
    templist.append("书名");
    templist.append("书目编号");
    templist.append("出版日期");
    templist.append("出版社");
    templist.append("作者名");
    templist.append("库存册数");
    bookInforModel->setHorizontalHeaderLabels(templist);

    int RowCnt = m_bookFile.bookSheet.size(); //行数（不含标题）
    bookInforModel->setRowCount(RowCnt);
    //遍历，插入数据
    QStandardItem *aTempItem; //临时的item
    QString tempStr;
    for(int i=0; i<RowCnt; ++i)
    {
       Book tempbook=m_bookFile.getBook(i);
       aTempItem = new QStandardItem(tempbook.getName());
       bookInforModel->setItem(i, 0, aTempItem);
       aTempItem = new QStandardItem(tempbook.getNumber());
       bookInforModel->setItem(i, 1, aTempItem);
       tempStr = tempbook.getDate().toString("yyyy-MM-dd");
       aTempItem = new QStandardItem(tempStr);
       bookInforModel->setItem(i, 2, aTempItem);
       aTempItem = new QStandardItem(tempbook.getPub());
       bookInforModel->setItem(i, 3, aTempItem);
       aTempItem = new QStandardItem(tempbook.getWriter());
       bookInforModel->setItem(i, 4, aTempItem);
       tempStr = QString::number(tempbook.getT());
       aTempItem = new QStandardItem(tempStr);
       bookInforModel->setItem(i, 5, aTempItem);
    }
    ReadOnlyDelegate* readOnlyDelegate = new ReadOnlyDelegate(this);
    ui->bookTable->setItemDelegateForColumn(0, readOnlyDelegate);
    ui->bookTable->setItemDelegateForColumn(1, readOnlyDelegate);
    ui->bookTable->setItemDelegateForColumn(2, readOnlyDelegate);
    ui->bookTable->setItemDelegateForColumn(3, readOnlyDelegate);
    ui->bookTable->setItemDelegateForColumn(4, readOnlyDelegate);
    ui->bookTable->setItemDelegateForColumn(5, readOnlyDelegate);

}
void MainWindow::ShowRegisterTable(int i)
{
    ui->bookTable->setAlternatingRowColors(true);
    m_iCurTable = 2; //表示当前显示的是登记号信息
    bookInforModel->clear();
    bookInforModel->setColumnCount(5); //5列


    QStringList templist;
    templist.append("书名");
    templist.append("登记号");
    templist.append("借阅状态");
    templist.append("借阅日期");
    templist.append("借书证号");

    bookInforModel->setHorizontalHeaderLabels(templist);

    int RowCnt = m_bookFile.bookSheet[i].bookR.size(); //行数（不含标题）
    bookInforModel->setRowCount(RowCnt);

    //遍历，插入数据
    QStandardItem *aTempItem; //临时的item
    QString tempStr;
    Book tempbook=m_bookFile.getBook(i);
    for(int j=0;j<tempbook.bookR.size();j++)
    {
        aTempItem = new QStandardItem(tempbook.getName());
        bookInforModel->setItem(j, 0, aTempItem);
        aTempItem = new QStandardItem(tempbook.bookR[j].registerName);
        bookInforModel->setItem(j, 1, aTempItem);
        if(tempbook.bookR[j].borrowSign==true)
        {
            tempStr="在架";
            aTempItem = new QStandardItem(tempStr);
            bookInforModel->setItem(j, 2, aTempItem);

        }
        else
        {
            tempStr="借出";
            aTempItem = new QStandardItem(tempStr);
            bookInforModel->setItem(j, 2, aTempItem);
            tempStr = tempbook.bookR[j].borrowDate.toString("yyyy-MM-dd");
            aTempItem = new QStandardItem(tempStr);
            bookInforModel->setItem(j, 3, aTempItem);
            aTempItem = new QStandardItem(tempbook.bookR[j].borrowNumber);
            bookInforModel->setItem(j, 4, aTempItem);
        }
    }
}
void MainWindow::on_ShowInfotableView_changed()
{
}


void MainWindow::showOne(int i,int j)
{
    ui->bookTable->setAlternatingRowColors(true);
    m_iCurTable = 3;
    bookInforModel->clear();
    bookInforModel->setColumnCount(5); //5列
    QStringList templist;
    templist.append("书名");
    templist.append("登记号");
    templist.append("借阅状态");
    templist.append("借阅日期");
    templist.append("借书证号");

    bookInforModel->setHorizontalHeaderLabels(templist);

    int RowCnt = 1; //行数（不含标题）
    bookInforModel->setRowCount(RowCnt);

    //遍历，插入数据
    QStandardItem *aTempItem; //临时的item
    QString tempStr;
    Book tempbook=m_bookFile.getBook(i);
    aTempItem = new QStandardItem(tempbook.getName());
    bookInforModel->setItem(0, 0, aTempItem);
    aTempItem = new QStandardItem(tempbook.bookR[j].registerName);
    bookInforModel->setItem(0, 1, aTempItem);
    if(tempbook.bookR[j].borrowSign==true)
    {
        tempStr="在架";
        aTempItem = new QStandardItem(tempStr);
        bookInforModel->setItem(0, 2, aTempItem);

    }
    else
    {
        tempStr="借出";
        aTempItem = new QStandardItem(tempStr);
        bookInforModel->setItem(0, 2, aTempItem);
        tempStr = tempbook.bookR[j].borrowDate.toString("yyyy-MM-dd");
        aTempItem = new QStandardItem(tempStr);
        bookInforModel->setItem(0, 3, aTempItem);
        aTempItem = new QStandardItem(tempbook.bookR[j].borrowNumber);
        bookInforModel->setItem(0, 4, aTempItem);
    }
}

void MainWindow::on_showBook_triggered()
{
    ShowBookTable();
}



void MainWindow::on_actionname_triggered()
{
    borrowBook a(this);
    int ret=a.exec();
    QMessageBox qmb;
    qmb.setWindowTitle("提示");
    if(ret==QDialog::Accepted)
    {
        int x=0;
        QString name=a.borrowBookN();
        bool check=m_bookFile.find(name,x);
        if(check)
            ShowRegisterTable(x);
        else
        {
            qmb.setText("该书籍不存在");
            qmb.exec();
        }

    }

}

void MainWindow::on_actionnum_triggered()
{
    return2 b(this);
    int ret2=b.exec();
    QMessageBox qmb;
    qmb.setWindowTitle("提示");
    if(ret2==QDialog::Accepted)
    {
        QString num=b.regiNum();
        int x,y=0;
        bool check=m_bookFile.findR(num,x,y);
        if(check)
            showOne(x,y);
        else
        {
            qmb.setText("该登记号不存在");
            qmb.exec();
        }

    }

}
