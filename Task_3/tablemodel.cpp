#include "tablemodel.h"

tableModel::tableModel(QObject *parent, int row, int col)
    : QAbstractTableModel(parent)
{
    initRow = row;
    initCol = col;
}

int tableModel::rowCount(const QModelIndex &parent) const
{
    if (parent.isValid())
        return 0;

    return initRow;
}

int tableModel::columnCount(const QModelIndex &parent) const
{
    if (parent.isValid())
        return 0;

    return initCol;
}

QVariant tableModel::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();

    int result = (index.row() + 1) * (index.column() + 1);

    switch(role) {
        case Qt::DisplayRole:
            return QString::number(result);
            break;
    }

    if(role == Qt::DisplayRole) {
        return QString::number(result);
    }

    if(role == Qt::BackgroundRole) {
        if(result % 2 == 0)
            return QBrush(Qt::red);

        return QBrush(Qt::gray);
    }

    if(role == Qt::FontRole) {
        QFont font;

        if(result % 2 == 0) {
            font.setBold(true);
            font.setPixelSize(15);
        }

        return font;
    }

    if(role == Qt::TextAlignmentRole) {
        if(result % 2 == 0)
            return int(Qt::AlignCenter | Qt::AlignVCenter);

        return int(Qt::AlignRight | Qt::AlignVCenter);
    }

    return QVariant();
}
