#include "showresults.h"
#include "ui_showresults.h"
#include "mainwindow.h"

ShowResults::ShowResults(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ShowResults)
{
    ui->setupUi(this);
    ui->progressBar_results->setValue( wynik * 100 / liczbaPytan);
    this->setWindowTitle("Result");
    this->setFixedSize(700,400);
}

ShowResults::~ShowResults()
{
    delete ui;
}

void ShowResults::on_pushButton_clicked()
{
    this->hide();
    menuPtr->show();
}
