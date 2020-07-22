#ifndef DELETE_PERSON_H
#define DELETE_PERSON_H

#include <QWidget>
#include"widget.h"
using namespace std;

namespace Ui {
class delete_person;
}

class delete_person : public QWidget
{
    Q_OBJECT

public:
    explicit delete_person(QWidget *parent = nullptr);
    ~delete_person();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::delete_person *ui;
};

#endif // DELETE_PERSON_H
