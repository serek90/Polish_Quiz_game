#include "tileswords.h"
#include "ui_tileswords.h"

TilesWords::TilesWords(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TilesWords)
{
    ui->setupUi(this);
}

TilesWords::~TilesWords()
{
    delete ui;
}
