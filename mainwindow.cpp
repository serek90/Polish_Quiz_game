#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>

//TO DO: create a new class for those elements
int wynik = 0;
int liczbaPytan = 0;
MainWindow *menuPtr;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap picture("C:/Users/PC/Documents/GitHub/QT/polishQuiz/poland-flag.jpg");
    ui->label_picture->setPixmap(picture.scaled(300,300, Qt::KeepAspectRatio));
    this->setWindowTitle("Main Page");
    this->setFixedSize(700,400);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_PushButton_Exit_clicked()
{
    QMessageBox::StandardButton answer =  QMessageBox::question(this, "WARNING", "Are you really wanto to quit?", QMessageBox::Yes | QMessageBox::No);

    if(answer == QMessageBox::Yes)
        QApplication::quit();
}

void MainWindow::on_pushButton_StartTest_clicked()
{
    this->hide();
    choseWord = new ChoseWord(this);
    choseWord->show();
}
