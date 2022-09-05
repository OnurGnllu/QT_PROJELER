#include "mainwindow.h"
#include "ui_mainwindow.h"

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
int i = 0;

void MainWindow::on_dugme_1_clicked()
{
    i++;
    ui->textbox_2->setText(QString::number(i) +".kez " + "dugme basildi.");

;

    if (i%2 == 1)
    {
    ui->textbox_1->setText("acildi");


    }
    else {
        ui->textbox_1->setText("kapandi");

    }
}


