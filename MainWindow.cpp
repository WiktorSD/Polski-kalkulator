#include "MainWindow.h"
#include "ui_MainWindow.h"
#include <QTextEdit>
#include <QString>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::set_l(QString l)
{
    if(z=="")
    a+=l;
    else
    b+=l;
}

void MainWindow::wynik()
{
    l1=a.toDouble();
    l2=b.toDouble();
    if(z=="+")
    w=l1+l2;
    else
     if(z=="-")
      w=l1-l2;
    else
      if(z=="*")
          w=l1*l2;
    else
       if(z=="/")
           w=l1/l2;
    w1=QString::number(w,'g',11);
}

void MainWindow::wypisz_w()
{
    {
        if(b=="")
        {

            ui->plainTextEdit->setPlainText("");

        }
        else
        wynik();
        ui->plainTextEdit->setPlainText("");
        ui->plainTextEdit->setPlainText(w1);
        a=w1;
        b="";
        z="";
        w1="";
    }
}
void MainWindow::on_pushButton_clicked()
{
      ui->plainTextEdit->setPlainText(ui->plainTextEdit->toPlainText()+"1");
      set_l("1");
}

void MainWindow::on_pushButton_2_clicked()
{
     ui->plainTextEdit->setPlainText(ui->plainTextEdit->toPlainText()+"2");
     set_l("2");
}

void MainWindow::on_pushButton_5_clicked()
{
     ui->plainTextEdit->setPlainText(ui->plainTextEdit->toPlainText()+"3");
     set_l("3");
}

void MainWindow::on_pushButton_4_clicked()
{
     ui->plainTextEdit->setPlainText(ui->plainTextEdit->toPlainText()+"4");
     set_l("4");
}

void MainWindow::on_pushButton_3_clicked()
{
     ui->plainTextEdit->setPlainText(ui->plainTextEdit->toPlainText()+"5");
     set_l("5");
}

void MainWindow::on_pushButton_6_clicked()
{
     ui->plainTextEdit->setPlainText(ui->plainTextEdit->toPlainText()+"6");
     set_l("6");
}

void MainWindow::on_pushButton_7_clicked()
{
     ui->plainTextEdit->setPlainText(ui->plainTextEdit->toPlainText()+"7");
     set_l("7");
}

void MainWindow::on_pushButton_8_clicked()
{
     ui->plainTextEdit->setPlainText(ui->plainTextEdit->toPlainText()+"8");
     set_l("8");
}

void MainWindow::on_pushButton_10_clicked()
{
     ui->plainTextEdit->setPlainText(ui->plainTextEdit->toPlainText()+"9");
     set_l("9");
}

void MainWindow::on_pushButton_13_clicked()
{
    if(a!=""){
    ui->plainTextEdit->setPlainText(ui->plainTextEdit->toPlainText()+"+");
     if(z=="")
     z="+";
   else
     wypisz_w();
    }
}

void MainWindow::on_pushButton_14_clicked()
{
     if(a!=""){
     ui->plainTextEdit->setPlainText(ui->plainTextEdit->toPlainText()+"-");
     if(z=="")
     z="-";
   else
     wypisz_w();
     }
}

void MainWindow::on_pushButton_15_clicked()
{
     if(a!=""){
     ui->plainTextEdit->setPlainText(ui->plainTextEdit->toPlainText()+"*");
     if(z=="")
     z="*";
   else
     wypisz_w();
     }
}

void MainWindow::on_pushButton_16_clicked()
{
     if(a!=""){
     ui->plainTextEdit->setPlainText(ui->plainTextEdit->toPlainText()+"/");
     if(z=="")
     z="/";
   else
     wypisz_w();
     }

}

void MainWindow::on_pushButton_18_clicked()
{
    ui->plainTextEdit->setPlainText("");
    a="";
    b="";
    z="";
    w1="";
}

void MainWindow::on_pushButton_11_clicked()
{
    if(a!=""){
    ui->plainTextEdit->setPlainText(ui->plainTextEdit->toPlainText()+",");
    set_l(".");
       }
}

void MainWindow::on_pushButton_12_clicked()
{
    wypisz_w();
}

void MainWindow::on_pushButton_9_clicked()
{
    ui->plainTextEdit->setPlainText(ui->plainTextEdit->toPlainText()+"0");
    set_l("0");
}
