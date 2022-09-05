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


void MainWindow::on_cevir_buton_clicked()
{
    float deneme = 3.3;
   // ui->dolar_label->setText(QString::number(deneme));
    QString textEdit = ui->textEdit->toPlainText();
    ui->cevrilen_dolar->setText(textEdit);

}

