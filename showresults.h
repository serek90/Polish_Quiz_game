#ifndef SHOWRESULTS_H
#define SHOWRESULTS_H

#include <QDialog>

namespace Ui {
class ShowResults;
}

class ShowResults : public QDialog
{
    Q_OBJECT

public:
    explicit ShowResults(QWidget *parent = nullptr);
    ~ShowResults();

private slots:
    void on_pushButton_clicked();

private:
    Ui::ShowResults *ui;
};

#endif // SHOWRESULTS_H
