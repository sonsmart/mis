#include "classmate.h"
#include "ui_classmate.h"
#include<string>
#include<cstring>
#include "person.h"
#include"widget.h"
#include <QString>
using namespace std;
extern vector <person*> v;


classmate::~classmate()
{
    delete ui;
}

      classmate::classmate(QString a, QString b, QString c,QString y, QString d, QString e, QString scpc1) :person(a, b, c, y,d, e) { scpc = scpc1; }
      QString classmate::show_scpc() { return scpc; }
      void classmate::revise_scpc(QString a) { scpc = a; }
      int classmate::show_who() { return who; }
      void classmate:: putn(int a){n = a;}
