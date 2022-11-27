#ifndef MULTIPLICATIONTABLE_H
#define MULTIPLICATIONTABLE_H

#include <QMainWindow>
#include <QMessageBox>

#include "tablemodel.h"

QT_BEGIN_NAMESPACE
namespace Ui { class multiplicationTable; }
QT_END_NAMESPACE

class multiplicationTable : public QMainWindow
{
    Q_OBJECT

public:
    multiplicationTable(QWidget *parent = nullptr);
    ~multiplicationTable();

private slots:
    void on_pushButton_clicked();

private:
    Ui::multiplicationTable *ui;
};
#endif // MULTIPLICATIONTABLE_H
