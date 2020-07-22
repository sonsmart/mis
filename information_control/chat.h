#ifndef CHAT_H
#define CHAT_H

#include <QWidget>
#include"widget.h"
using namespace std;

namespace Ui {
class chat;
}

class chat : public QWidget
{
    Q_OBJECT

public:
    explicit chat(QWidget *parent = nullptr);
    ~chat();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::chat *ui;
};

#endif // CHAT_H
