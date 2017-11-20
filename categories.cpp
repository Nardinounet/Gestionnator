#include "categories.h"
#include "ui_categories.h"

Categories::Categories(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Categories)
{
    ui->setupUi(this);
}

Categories::~Categories()
{
    delete ui;
}

void Categories::on_BT_quitter_clicked()
{
    this->close();
}
