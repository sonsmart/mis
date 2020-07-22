#include "chat.h"
#include "ui_chat.h"
#include"widget.h"
#include<QFile>
#include<QDebug>
#include<QTextStream>
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
//查询界面的构造函数
chat::chat(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::chat)
{
     ui->setupUi(this);
     //改变按键颜色
     ui->pushButton->setStyleSheet("background-color:red");
     ui->pushButton_2->setStyleSheet("background-color:yellow");
}
//析构函数
chat::~chat()
{
    delete ui;
}
//确定查询按钮的槽函数
void chat::on_pushButton_clicked()
{
        QString name=ui->name->toPlainText();
        int b=0;
        //遍历v，找出被查询人的信息并写入chat.txt文件中
        for(unsigned int c=0;c<v.size();c++)
    {if(name==v[c]->show_name())
            {   QFile writeFileall("chat.txt");
                if(writeFileall.open(QIODevice::WriteOnly|QIODevice::Text))
                {QTextStream out(&writeFileall);
                 QString tips="你要查询的人是：";
                 tips=tips.toUtf8();
                 if(v[c]->show_who()==1)            { out<<tips<<"\n" <<v[c]->show_name()<<",birthday:" << v[c]->show_year() << "." << v[c]->show_month() << "." << v[c]->show_day()<<",tel:"<<v[c]->show_phone()<<",email:"<<v[c]->show_email() << ",school:" << v[c]->show_scpc()<<"\n";}
                 if(v[c]->show_who()==2)            { out<<tips<<"\n" <<v[c]->show_name()<<",birthday:" << v[c]->show_year() << "." << v[c]->show_month() << "." << v[c]->show_day()<<",tel:"<<v[c]->show_phone()<<",email:"<<v[c]->show_email() << ",company:" << v[c]->show_scpc()<<"\n";}
                 if(v[c]->show_who()==3)            { out<<tips<<"\n" <<v[c]->show_name()<<",birthday:" << v[c]->show_year() << "." << v[c]->show_month() << "." << v[c]->show_day()<<",tel:"<<v[c]->show_phone()<<",email:"<<v[c]->show_email() << ",the place where you meet:" << v[c]->show_scpc()<<"\n";}
                 if(v[c]->show_who()==4)            { out<<tips<<"\n" <<v[c]->show_name()<<",birthday:" << v[c]->show_year() << "." << v[c]->show_month() << "." << v[c]->show_day()<<",tel:"<<v[c]->show_phone()<<",email:"<<v[c]->show_email() << ",call:" << v[c]->show_scpc()<<"\n";}
                 writeFileall.close();
                 writeFileall.open(QIODevice::ReadOnly|QIODevice::Text);
                 QTextStream stream(&writeFileall);
                 //读取chat.txt的全部内容
                 ui->textEdit->setText(stream.readAll());
                 writeFileall.close();}
                 b++;
            }
            //如果在v找不到，则写入无法查询此人的提示到chat.txt中
        if(b==0){
                     QFile writeFileall("chat.txt");
                     if(writeFileall.open(QIODevice::WriteOnly|QIODevice::Text))
                     {QTextStream out(&writeFileall);
                     QString tips="This person's information has not been entered";
                     tips=tips.toUtf8();
                     out<<tips;
                     writeFileall.close();
                     writeFileall.open(QIODevice::ReadOnly|QIODevice::Text);
                     QTextStream stream(&writeFileall);
                     ui->textEdit->setText(stream.readAll());
                     writeFileall.close();}
                }
    }
}

//关闭窗口
void chat::on_pushButton_2_clicked()
{
     this->close();
}
