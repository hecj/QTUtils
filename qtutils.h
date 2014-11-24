#ifndef QTUTILS_H
#define QTUTILS_H

#include <QtGui/QWidget>
#include "ui_qtutils.h"

class QTUtils : public QWidget
{
    Q_OBJECT

public:
    QTUtils(QWidget *parent = 0);
    ~QTUtils();

private:
    Ui::QTUtilsClass ui;
};

#endif // QTUTILS_H
