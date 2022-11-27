#ifndef TABLEMODEL_H
#define TABLEMODEL_H

#include <QAbstractTableModel>
#include <QVariant>
#include <QString>
#include <QBrush>
#include <QFont>

class tableModel : public QAbstractTableModel
{
    Q_OBJECT

    public:
        explicit tableModel(QObject *parent = nullptr, int row = 0, int col = 0);

        // Basic functionality:
        int rowCount(const QModelIndex &parent = QModelIndex()) const override;
        int columnCount(const QModelIndex &parent = QModelIndex()) const override;

        QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;

    private:
        int initRow;
        int initCol;
};

#endif // TABLEMODEL_H
