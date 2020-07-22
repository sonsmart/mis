#include "delete_person.h"
#include "ui_delete_person.h"
#include"widget.h"
#include "cout_person.h"
#include "ui_cout_person.h"
#include<QString>
#include<QFile>
#include<QDebug>
#include<qdebug.h>
#include"classmate.h"
#include"collaege.h"
#include"relative.h"
#include"the_friend.h"
#include<iostream>
#include"widget.h"
using namespace std;
extern vector <person*> v;
//删除的界面
delete_person::delete_person(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::delete_person)
{
    ui->setupUi(this);
    ui->pushButton->setStyleSheet("background-color:red");
    ui->pushButton_2->setStyleSheet("background-color:yellow");
}
//析构函数
delete_person::~delete_person()
{
    delete ui;
}

void delete_person::on_pushButton_clicked()
{
    QString name = ui->name->toPlainText();
    for(unsigned int c=0;c<v.size();c++)
    {
        if(v[c]->show_name()==name)
        {
            v.erase(v.begin()+c);
            break;
        }
    }
    if(ui->classmate->isChecked()==true)
    {
        QFile writeFile("AddressBook1.txt");
                if(writeFile.open(QIODevice::WriteOnly|QIODevice::Text))
                {
                        QTextStream stream(&writeFile);

                        for(unsigned int c=0;c<v.size();c++)
                        {if(v[c]->show_who()==1)

                            {
                                stream<<v[c]->show_name()<<"," << v[c]->show_year() << "," << v[c]->show_month() << "," << v[c]->show_day()<<","<<v[c]->show_phone()<<","<<v[c]->show_email() << "," << v[c]->show_scpc()<<","<<"\n";
                            }

                        }
                }
                writeFile.close();


    }
    else if(ui->collaege->isChecked()==true)
    {
        QFile writeFile2("AddressBook2.txt");
              if(writeFile2.open(QIODevice::WriteOnly|QIODevice::Text))
              {
                      QTextStream stream(&writeFile2);

                      for(unsigned int c=0;c<v.size();c++)
                      {if(v[c]->show_who()==2)

                          {
                              stream<<v[c]->show_name()<<"," << v[c]->show_year() << "," << v[c]->show_month() << "," << v[c]->show_day()<<","<<v[c]->show_phone()<<","<<v[c]->show_email() << "," << v[c]->show_scpc()<<","<<"\n";
                        }

                      }
              }
              writeFile2.close();
    }
    else if(ui->the_friend->isChecked()==true)
    {
        QFile writeFile3("AddressBook3.txt");
                if(writeFile3.open(QIODevice::WriteOnly|QIODevice::Text))
                {
                        QTextStream stream(&writeFile3);

                        for(unsigned int c=0;c<v.size();c++)
                        {if(v[c]->show_who()==3)

                            {
                                stream<<v[c]->show_name()<<"," << v[c]->show_year() << "," << v[c]->show_month() << "," << v[c]->show_day()<<","<<v[c]->show_phone()<<","<<v[c]->show_email() << "," << v[c]->show_scpc()<<","<<"\n";
                           }

                        }
                }
                writeFile3.close();

    }
    else if(ui->relative->isChecked()==true)
    {
        QFile writeFile4("AddressBook4.txt");
                if(writeFile4.open(QIODevice::WriteOnly|QIODevice::Text))
                {
                        QTextStream stream(&writeFile4);

                        for(unsigned int c=0;c<v.size();c++)
                        {if(v[c]->show_who()==4)

                            {
                                stream<<v[c]->show_name()<<"," << v[c]->show_year() << "," << v[c]->show_month() << "," << v[c]->show_day()<<","<<v[c]->show_phone()<<","<<v[c]->show_email() << "," << v[c]->show_scpc()<<","<<"\n";
                          }

                        }
                }
                writeFile4.close();
    }
    qDebug()<<"删除信息成功!"<<endl;
    this->close();
}
//关闭界面
void delete_person::on_pushButton_2_clicked()
{
    this->close();
}
