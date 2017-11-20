#ifndef CATEGORIES_H
#define CATEGORIES_H

#include <QMainWindow>

namespace Ui {
class Categories;
}

class Categories : public QMainWindow
{
    Q_OBJECT

public:
    explicit Categories(QWidget *parent = 0);
    ~Categories();

private slots:
    void on_BT_quitter_clicked();

private:
    Ui::Categories *ui;
};

#endif // CATEGORIES_H
