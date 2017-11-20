#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"categories.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
public slots:
       void openNewWindow();

private slots:

    void on_BT_Quitter_clicked();

    void on_BT_se_connecter_clicked();
private:
    Categories *categorieWindow;
private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
