#ifndef COUT_PERSON_H
#define COUT_PERSON_H

#include <QWidget>
#include"widget.h"
#include"person.h"
using namespace std;

namespace Ui {
class cout_person;
}

class cout_person : public QWidget
{
    Q_OBJECT

public:
    explicit cout_person(QWidget *parent = nullptr);
    ~cout_person();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();


private:
    Ui::cout_person *ui;
};

#endif // COUT_PERSON_H
