#ifndef TILESWORDS_H
#define TILESWORDS_H

#include <QDialog>

namespace Ui {
class TilesWords;
}

class TilesWords : public QDialog
{
    Q_OBJECT

public:
    explicit TilesWords(QWidget *parent = nullptr);
    ~TilesWords();

private:
    Ui::TilesWords *ui;
};

#endif // TILESWORDS_H
