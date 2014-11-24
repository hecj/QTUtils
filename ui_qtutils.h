/********************************************************************************
** Form generated from reading UI file 'qtutils.ui'
**
** Created: Tue Nov 25 00:40:13 2014
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTUTILS_H
#define UI_QTUTILS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QTUtilsClass
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QToolButton *toolButton;

    void setupUi(QWidget *QTUtilsClass)
    {
        if (QTUtilsClass->objectName().isEmpty())
            QTUtilsClass->setObjectName(QString::fromUtf8("QTUtilsClass"));
        QTUtilsClass->resize(400, 300);
        pushButton = new QPushButton(QTUtilsClass);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(100, 180, 75, 23));
        pushButton_2 = new QPushButton(QTUtilsClass);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(130, 100, 75, 23));
        toolButton = new QToolButton(QTUtilsClass);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setGeometry(QRect(240, 140, 37, 18));

        retranslateUi(QTUtilsClass);

        QMetaObject::connectSlotsByName(QTUtilsClass);
    } // setupUi

    void retranslateUi(QWidget *QTUtilsClass)
    {
        QTUtilsClass->setWindowTitle(QApplication::translate("QTUtilsClass", "QTUtils", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("QTUtilsClass", "PushButton", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("QTUtilsClass", "\346\265\213\350\257\225QT", 0, QApplication::UnicodeUTF8));
        toolButton->setText(QApplication::translate("QTUtilsClass", "...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QTUtilsClass: public Ui_QTUtilsClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTUTILS_H
