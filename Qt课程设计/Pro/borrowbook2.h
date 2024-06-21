#ifndef BORROWBOOK2_H
#define BORROWBOOK2_H

#include <QDialog>

namespace Ui {
class borrowBook2;
}

class borrowBook2 : public QDialog
{
    Q_OBJECT

public:
    explicit borrowBook2(QWidget *parent = nullptr);
    ~borrowBook2();

     QDate borrowDate();
     QString borrowNum();

private:
    Ui::borrowBook2 *ui;
};

#endif // BORROWBOOK2_H
