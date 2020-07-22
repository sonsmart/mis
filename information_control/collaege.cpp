#include "collaege.h"
#include "ui_collaege.h"
#include "person.h"
#include<string>
#include<cstring>
#include"widget.h"
using namespace std;
extern vector <person*> v;
collaege::collaege(QString a, QString b, QString c,QString y, QString d, QString e, QString scpc1) :person(a, b, c, y,d, e) { scpc = scpc1; }
    QString collaege::show_scpc() { return scpc; }
      void collaege::revise_scpc(QString a) { scpc = a; }
       int collaege::show_who() { return who; }
       void collaege::putn(int a) { n = a; }
collaege::~collaege()
{
    delete ui;
}


