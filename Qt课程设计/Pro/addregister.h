#ifndef ADDREGISTER_H
#define ADDREGISTER_H

#include <QDialog>
#include<QString>

namespace Ui {
class addRegister;
}

class addRegister : public QDialog
{
    Q_OBJECT

public:
    explicit addRegister(QWidget *parent = nullptr);
    ~addRegister();
    QString bookName();
    QString addRegi();

private:
    Ui::addRegister *ui;
};

#endif // ADDREGISTER_H
