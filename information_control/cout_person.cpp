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
//录入界面的构造函数
cout_person::cout_person(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::cout_person)
{
    ui->setupUi(this);
    ui->pushButton->setStyleSheet("background-color:red");
    ui->pushButton_2->setStyleSheet("background-color:yellow");
}
//析构函数
cout_person::~cout_person()
{
    delete ui;
}


//确定按钮的槽函数
void cout_person::on_pushButton_clicked()
{   //先输入信息到字符串中
    QString name = ui->name->toPlainText();
    QString phone = ui->phone->toPlainText();
    QString email = ui->email->toPlainText();
    QString year = ui->year->toPlainText();
    QString month = ui->month->toPlainText();
    QString day = ui->day->toPlainText();
    QString scpc = ui->scpc->toPlainText();
    if(ui->classmate->isChecked()==true)
    //再将字符串信息写入四个txt文件之一中
    { v.push_back(new classmate(name, phone, email,year, month, day, scpc));
        QFile file("AddressBook1.txt");
                if (!file.open(QIODevice::WriteOnly | QIODevice::Append	)) {
                    qDebug() << "Open file failed.";
                    this->close() ;
                } else {
                    QTextStream out(&file);
                  out << QString(name)<< ","<<QString(year)<< ","<< QString(month)<< ","<< QString(day)<< ","<< QString(phone)<< ","<< QString(email)<< ","<< QString(scpc)<<","<<"\n";
                }
                file.close();
                this->close();


    }
    else if(ui->collaege->isChecked()==true)
    {v.push_back(new collaege(name, phone, email,year, month, day, scpc));
        QFile file1("AddressBook2.txt");
                if (!file1.open(QIODevice::WriteOnly | QIODevice::Append	)) {
                    qDebug() << "Open file failed.";
                    this->close() ;
                } else {
                    QTextStream out(&file1);
                    out<< QString(name)<< ","<<QString(year)<< ","<< QString(month)<< ","<< QString(day)<< ","<< QString(phone)<< ","<< QString(email)<< ","<< QString(scpc)<<","<<"\n";
               }
                file1.close();
                this->close();

    }
    else if(ui->the_friend->isChecked()==true)
    {v.push_back(new the_friend(name, phone, email,year, month, day, scpc));
        QFile file2("AddressBook3.txt");
                if (!file2.open(QIODevice::WriteOnly | QIODevice::Append	)) {
                    qDebug() << "Open file failed.";
                    this->close() ;
                } else {
                    QTextStream out(&file2);
                    out << QString(name)<< ","<<QString(year)<< ","<< QString(month)<< ","<< QString(day)<< ","<< QString(phone)<< ","<< QString(email)<< ","<< QString(scpc)<<","<<"\n";
                }
                file2.close();
                this->close();

    }
    else if(ui->relative->isChecked()==true)
    {v.push_back(new relative(name, phone, email,year, month, day, scpc));
        QFile file3("AddressBook4.txt");
                if (!file3.open(QIODevice::WriteOnly | QIODevice::Append	)) {
                    qDebug() << "Open file failed.";
                    this->close() ;
                } else {
                    QTextStream out(&file3);
                    out << QString(name)<< ","<<QString(year)<< ","<< QString(month)<< ","<< QString(day)<< ","<< QString(phone)<< ","<< QString(email)<< ","<< QString(scpc)<<","<<"\n";
                }
                file3.close();
                this->close();
qDebug()<<"录入信息成功!";
    }

}
//取消的槽函数
void cout_person::on_pushButton_2_clicked()
{
    this->close();
}


