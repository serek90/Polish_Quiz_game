#ifndef CHOSEWORD_H
#define CHOSEWORD_H

#include <QDialog>
#include "showresults.h"

namespace Ui {
class ChoseWord;
}

class ChoseWord : public QDialog
{
    Q_OBJECT

public:
    explicit ChoseWord(QWidget *parent = nullptr);
    ~ChoseWord();

private slots:
    void on_pushButton_check_clicked();

    void on_comboBox_activated(int index);

private:
    Ui::ChoseWord *ui;
    ShowResults *showResults;

    bool isAnswerCorrect;
};

#endif // CHOSEWORD_H
