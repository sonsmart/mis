#ifndef COLLAEGE_H
#define COLLAEGE_H
#include"person.h"
#include <QWidget>
#include<string>
#include<cstring>
#include"widget.h"
using namespace std;

namespace Ui {
class collaege;
}

class collaege : public person
{
    Q_OBJECT

public:


        ~collaege();
   collaege(QString a, QString b,QString c,QString y, QString d, QString e, QString scpc1)  ;
        QString show_scpc();
        void revise_scpc(QString a) ;
        int show_who() ;
        void putn(int a);

private:
    Ui::collaege *ui;
    QString scpc;
    int who = 2;
    int n=0;

};

#endif // COLLAEGE_H
