#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "choseword.h"

extern int wynik;
extern int liczbaPytan;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_PushButton_Exit_clicked();

    void on_pushButton_StartTest_clicked();

private:
    Ui::MainWindow *ui;
    ChoseWord *choseWord;

};

extern MainWindow *menuPtr;

#endif // MAINWINDOW_H
