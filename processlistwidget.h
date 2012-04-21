#ifndef PROCESSLISTWIDGET_H
#define PROCESSLISTWIDGET_H

#include <QTableWidget>
#include <QHeaderView>
#include "ProcessList.h"

class ProcessListWidget : public QTableWidget
{
    Q_OBJECT
public:
    explicit ProcessListWidget(QWidget *parent = 0);
    
signals:
    
public slots:
    void on_CellActivated(int row, int column, int prevR, int prevC);
    void on_CellDoubleClicked(int row, int column);

signals:
    void processSelected(int pid, QString name);
    
};

#endif // PROCESSLISTWIDGET_H