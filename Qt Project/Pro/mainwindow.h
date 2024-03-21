#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "bookfile.h"
#include "addbook.h"
#include <QMessageBox>
#include "QStandardItemModel"
#include "readonlydelegate.h"
#include "return2.h"
#include "deletebook.h"
#include "addregister.h"
#include "delregister.h"
#include "borrowbook.h"
#include "borrowbook2.h"
#include "returnbook.h"
#include <QDir>
#include<QTableWidgetItem>
#include<QHeaderView>
#include <QFileDialog>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
protected:
    virtual void resizeEvent(QResizeEvent *event) override;

    void ShowBookTable();
    void ShowRegisterTable(int);
    void showOne(int,int);

private slots:
    void on_actionadd_triggered();

    void on_actiondelete_triggered();

    void on_addReg_triggered();

    void on_delReg_triggered();

    void on_borrowB_triggered();

    void on_returnB_triggered();

    void on_save_triggered();

    void on_open_triggered();

    void on_ShowInfotableView_changed();

    void on_showBook_triggered();

    void on_actionname_triggered();

    void on_actionnum_triggered();

private:
    Ui::MainWindow *ui;
    bookFile m_bookFile;
    QStandardItemModel * bookInforModel; //显示表格信息数据模型
    int m_iCurTable;
};

#endif // MAINWINDOW_H
