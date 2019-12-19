#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <string>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_zero_btn_clicked()
{
    if(QString::compare(ui->expr_symbol->text(),"") == 0) {
        ui->firstEdit->setText(ui->firstEdit->text() + "0");
    }else{
        ui->secondEdit->setText(ui->secondEdit->text()+"0");
    }
}

void MainWindow::on_one_btn_clicked()
{
    if(QString::compare(ui->expr_symbol->text(),"") == 0) {
        ui->firstEdit->setText(ui->firstEdit->text() + "1");
    }else{
        ui->secondEdit->setText(ui->secondEdit->text()+"1");
    }
}

void MainWindow::on_two_btn_clicked()
{
    if(QString::compare(ui->expr_symbol->text(),"") == 0) {
        ui->firstEdit->setText(ui->firstEdit->text() + "2");
    }else{
        ui->secondEdit->setText(ui->secondEdit->text()+"2");
    }
}

void MainWindow::on_three_btn_clicked()
{
    if(QString::compare(ui->expr_symbol->text(),"") == 0) {
        ui->firstEdit->setText(ui->firstEdit->text() + "3");
    }else{
        ui->secondEdit->setText(ui->secondEdit->text()+"3");
    }
}

void MainWindow::on_four_btn_clicked()
{
    if(QString::compare(ui->expr_symbol->text(),"") == 0) {
        ui->firstEdit->setText(ui->firstEdit->text() + "4");
    }else{
        ui->secondEdit->setText(ui->secondEdit->text()+"4");
    }
}

void MainWindow::on_five_btn_clicked()
{
    if(QString::compare(ui->expr_symbol->text(),"") == 0) {
        ui->firstEdit->setText(ui->firstEdit->text() + "5");
    }else{
        ui->secondEdit->setText(ui->secondEdit->text()+"5");
    }
}

void MainWindow::on_six_btn_clicked()
{
    if(QString::compare(ui->expr_symbol->text(),"") == 0) {
        ui->firstEdit->setText(ui->firstEdit->text() + "6");
    }else{
        ui->secondEdit->setText(ui->secondEdit->text()+"6");
    }
}

void MainWindow::on_seven_btn_clicked()
{
    if(QString::compare(ui->expr_symbol->text(),"") == 0) {
        ui->firstEdit->setText(ui->firstEdit->text() + "7");
    }else{
        ui->secondEdit->setText(ui->secondEdit->text()+"7");
    }
}

void MainWindow::on_eight_btn_clicked()
{
    if(QString::compare(ui->expr_symbol->text(),"") == 0) {
        ui->firstEdit->setText(ui->firstEdit->text() + "8");
    }else{
        ui->secondEdit->setText(ui->secondEdit->text()+"8");
    }
}

void MainWindow::on_nine_btn_clicked()
{
    if(QString::compare(ui->expr_symbol->text(),"") == 0) {
        ui->firstEdit->setText(ui->firstEdit->text() + "9");
    }else{
        ui->secondEdit->setText(ui->secondEdit->text()+"9");
    }
}

void MainWindow::on_plus_btn_clicked()
{
    ui->expr_symbol->setText("+");
}

void MainWindow::on_min_btn_clicked(){
    ui->expr_symbol->setText("-");
    }

void MainWindow::on_mult_btn_clicked(){
    ui->expr_symbol->setText("x");
    }


void MainWindow::on_divi_btn_clicked(){
    ui->expr_symbol->setText("/");
   }


void MainWindow::on_equal_btn_clicked(){
    if (ui->expr_symbol->text() == "+")
        ui->resultEdit->setText(QString::number(ui->firstEdit->text().toInt(NULL,10) + ui->secondEdit->text().toInt(NULL,10)));
    else if(ui->expr_symbol->text() == "-")
        ui->resultEdit->setText(QString::number(ui->firstEdit->text().toInt(NULL,10) - ui->secondEdit->text().toInt(NULL,10)));
    else if(ui->expr_symbol->text() == "x")
        ui->resultEdit->setText(QString::number(ui->firstEdit->text().toInt(NULL,10) * ui->secondEdit->text().toInt(NULL,10)));
    else if(ui->expr_symbol->text() == "/")
        ui->resultEdit->setText(QString::number(ui->firstEdit->text().toInt(NULL,10) / ui->secondEdit->text().toInt(NULL,10)));

}

void MainWindow::on_AC_btn_clicked(){
    ui->firstEdit->setText("");
    ui->secondEdit->setText("");
    ui->resultEdit->setText("");
    ui->expr_symbol->setText("");
}
