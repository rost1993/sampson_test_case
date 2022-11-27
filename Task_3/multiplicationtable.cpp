#include "multiplicationtable.h"
#include "./ui_multiplicationtable.h"

multiplicationTable::multiplicationTable(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::multiplicationTable)
{
    ui->setupUi(this);

    tableModel *multiplicationTable = new tableModel(this, 5, 5);
    ui->multiplicationTableView->setModel(multiplicationTable);
}

multiplicationTable::~multiplicationTable()
{
    delete ui;
}


void multiplicationTable::on_pushButton_clicked()
{
    int count = ui->numberSpinBox->text().toInt();

    if(count > 15) {
        QMessageBox::warning(this, "Внимание", "Это тренировочный пример! Не стоит запрашивать вывод более 15 строк и столбцов!");
        return;
    }

    tableModel *multiplicationTable = new tableModel(this, count, count);
    ui->multiplicationTableView->setModel(multiplicationTable);
}

