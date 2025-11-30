#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QObject>
#include <QPushButton>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

initialView();

QObject::connect(ui->pb0,&QPushButton::clicked,[=]() { addSymbol("0"); });
QObject::connect(ui->pb1,&QPushButton::clicked,[=]() { addSymbol("1"); });
QObject::connect(ui->pb2,&QPushButton::clicked,[=]() { addSymbol("2"); });
QObject::connect(ui->pb3,&QPushButton::clicked,[=]() { addSymbol("3"); });
QObject::connect(ui->pb4,&QPushButton::clicked,[=]() { addSymbol("4"); });
QObject::connect(ui->pb5,&QPushButton::clicked,[=]() { addSymbol("5"); });
QObject::connect(ui->pb6,&QPushButton::clicked,[=]() { addSymbol("6"); });
QObject::connect(ui->pb7,&QPushButton::clicked,[=]() { addSymbol("7"); });
QObject::connect(ui->pb8,&QPushButton::clicked,[=]() { addSymbol("8"); });
QObject::connect(ui->pb9,&QPushButton::clicked,[=]() { addSymbol("9"); });
QObject::connect(ui->pbAC,&QPushButton::clicked,[=]() { resetFlagsAndData();ui->lineEdit->clear(); });

QObject::connect(ui->pb_summ,&QPushButton::clicked,[=]() { addOperation("+"); });
QObject::connect(ui->pb_substract,&QPushButton::clicked,[=]() { addOperation("-"); });
QObject::connect(ui->pb_split,&QPushButton::clicked,[=]() { addOperation("/"); });
QObject::connect(ui->pb_malti,&QPushButton::clicked,[=]() { addOperation("*"); });

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::initialView()
{

    ui->pb0->setProperty("role", "digit");
    ui->pb1->setProperty("role", "digit");
    ui->pb2->setProperty("role", "digit");
    ui->pb3->setProperty("role", "digit");
    ui->pb4->setProperty("role", "digit");
    ui->pb5->setProperty("role", "digit");
    ui->pb6->setProperty("role", "digit");
    ui->pb7->setProperty("role", "digit");
    ui->pb8->setProperty("role", "digit");
    ui->pb9->setProperty("role", "digit");



    ui->pb_summ->setProperty("role", "operation");
    ui->pb_substract->setProperty("role", "operation");
    ui->pb_malti->setProperty("role", "operation");
    ui->pb_split->setProperty("role", "operation");


    ui->pb_result->setObjectName("equalsButton");

    ui->pbAC->setObjectName("clearButton");
}
void MainWindow::addSymbol(QString value)
{
        if(!flag_operation)
           {
           firstNumber+=value;
           ui->lineEdit->clear();
           ui->lineEdit->setText(firstNumber);

           }
           else
           {
           secondNumber+=value;
           ui->lineEdit->setText(secondNumber);

           }
}


void MainWindow::resetFlagsAndData()
{
    firstNumber.clear();

    secondNumber.clear();

    operation.clear();

    flag_operation=false;
}

void MainWindow::addOperation(QString op)
{
    ui->lineEdit->clear();
    operation.clear();
    operation=op;
    flag_operation=true;


}

void MainWindow::on_pb_result_clicked()
{


        if(!secondNumber.isEmpty()&& flag_operation)
        {


           double result;

            char *op=operation.toUtf8().data();
            switch(*op) {
                   case '+': result = firstNumber.toDouble() + secondNumber.toDouble(); break;
                   case '-': result = firstNumber.toDouble() - secondNumber.toDouble(); break;
                   case '*': result = firstNumber.toDouble() * secondNumber.toDouble(); break;
                   case '/':
                       if (secondNumber.toDouble() != 0) result = firstNumber.toDouble() / secondNumber.toDouble();
                       else { /* Обработка деления на 0 */ }
                       break;
               }
            ui->lineEdit->clear();
            ui->lineEdit->setText(QString::number(result));
       resetFlagsAndData();
        }



}
