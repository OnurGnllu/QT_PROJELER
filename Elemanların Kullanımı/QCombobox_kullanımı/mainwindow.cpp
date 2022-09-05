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


//comboboxta bir seçim olduğunda
void MainWindow::on_comboBox_currentTextChanged(const QString &arg1)
{
    if(ui->comboBox->currentText() == "Dolar"){
        ui->dolar_label->setText("Dolar");
    }

    else if(ui->comboBox->currentText() == "Euro"){
        ui->dolar_label->setText("Euro");
    }

    else {
        ui->dolar_label->setText("Sterlin");

    }

}

