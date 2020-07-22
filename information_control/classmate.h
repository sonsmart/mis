#ifndef CLASSMATE_H
#define CLASSMATE_H
#include"person.h"
#include <QWidget>
#include<string>
#include<cstring>
#include"widget.h"
using namespace std;

namespace Ui {
class classmate;
}

class classmate : public person
{
    Q_OBJECT

public:

    ~classmate();
    classmate(QString a, QString b,QString c,QString y, QString d, QString e, QString scpc1)  ;
        QString show_scpc();
        void revise_scpc(QString a) ;
        int show_who() ;
        void putn(int a);

private:
    Ui::classmate *ui;
    QString scpc;
    int who = 1;
    int n=0;
};

#endif // CLASSMATE_H
