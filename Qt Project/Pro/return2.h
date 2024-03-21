#ifndef RETURN2_H
#define RETURN2_H

#include <QDialog>

namespace Ui {
class return2;
}

class return2 : public QDialog
{
    Q_OBJECT

public:
    explicit return2(QWidget *parent = nullptr);
    ~return2();
    QString regiNum();

private:
    Ui::return2 *ui;
};

#endif // RETURN2_H
