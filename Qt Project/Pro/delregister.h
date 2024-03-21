#ifndef DELREGISTER_H
#define DELREGISTER_H

#include <QDialog>

namespace Ui {
class delRegister;
}

class delRegister : public QDialog
{
    Q_OBJECT

public:
    explicit delRegister(QWidget *parent = nullptr);
    ~delRegister();
     QString delBookN();
     QString delBookR();
private:
    Ui::delRegister *ui;
};

#endif // DELREGISTER_H
