#ifndef MODIFY_H
#define MODIFY_H

#include <QDialog>
#include"employe.h"

namespace Ui {
class modify;
}

class modify : public QDialog
{
    Q_OBJECT

public:
    explicit modify(QWidget *parent = nullptr);
    ~modify();

private slots:
    void on_confirm_delete_clicked();

    void on_confirm_modify_clicked();


    void on_pushButton_clicked();

    void on_confirm_clicked();

private:
    Ui::modify *ui;
    Employe e ;
    Employe g ;
};

#endif // MODIFY_H
