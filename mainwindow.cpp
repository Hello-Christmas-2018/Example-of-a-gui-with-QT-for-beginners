#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //SETUP
    ui->dial->setMinimum(0);
    ui->dial->setMaximum(100);
    ui->dial->setValue(0);
    ui->progressBar->setValue(0);
    ui->horizontalSlider->setMinimum(0);
    ui->horizontalSlider->setMaximum(100);
    ui->horizontalSlider->setValue(0);
    ui->verticalSlider->setMinimum(0);
    ui->verticalSlider->setMaximum(100);
    ui->verticalSlider->setValue(0);
    this->setFixedSize(this->width(),this->height());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_dial_valueChanged(int value)
{
   ui->progressBar->setValue(value);
   ui->horizontalSlider->setValue(value);
}

void MainWindow::on_horizontalSlider_valueChanged(int value)
{
    ui->dial->setValue(value);
    ui->verticalSlider->setValue(value);

}




void MainWindow::on_verticalSlider_valueChanged(int value)
{
    ui->horizontalSlider->setValue(value);
    ui->lcdNumber->display(value);
}
