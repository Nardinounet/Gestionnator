#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->BT_se_connecter, SIGNAL(click()), this, SLOT(openNewWindow()));
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_BT_Quitter_clicked()
{
    this ->close();
}

void MainWindow::on_BT_se_connecter_clicked()
{
    openNewWindow();
}

void MainWindow::openNewWindow()
{
    this ->close();
    categorieWindow = new Categories();
    categorieWindow->show();
}
