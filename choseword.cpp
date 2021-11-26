#include "choseword.h"
#include "ui_choseword.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

ChoseWord::ChoseWord(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChoseWord)
{
    ui->setupUi(this);

    this->setWindowTitle("Question number 1");
    this->setFixedSize(700,400);
}

ChoseWord::~ChoseWord()
{
    delete ui;
}

void ChoseWord::on_pushButton_check_clicked()
{
    if(isAnswerCorrect)
    {
        QMessageBox::about(this, "Correct",  "You are chose the correct answer!!!");
    }
    else
    {
        QMessageBox::about(this,  "Uncorrect", "You are not chose the correct answer!!!");
    }
    liczbaPytan++;

    this->hide();
    showResults = new ShowResults(this);
    showResults->show();
}

void ChoseWord::on_comboBox_activated(int index)
{
    if(index == 1)
    {
        isAnswerCorrect = true;
        wynik = 1;
    }
    else
    {
        isAnswerCorrect = false;
        wynik = 0;
    }
}
