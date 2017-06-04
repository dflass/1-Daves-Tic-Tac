/********************************************************************************
** Form generated from reading UI file 'mainboard.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINBOARD_H
#define UI_MAINBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainBoard
{
public:
    QWidget *centralWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;

    void setupUi(QMainWindow *mainBoard)
    {
        if (mainBoard->objectName().isEmpty())
            mainBoard->setObjectName(QStringLiteral("mainBoard"));
        mainBoard->resize(600, 600);
        centralWidget = new QWidget(mainBoard);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 0, 591, 591));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        mainBoard->setCentralWidget(centralWidget);

        retranslateUi(mainBoard);

        QMetaObject::connectSlotsByName(mainBoard);
    } // setupUi

    void retranslateUi(QMainWindow *mainBoard)
    {
        mainBoard->setWindowTitle(QApplication::translate("mainBoard", "mainBoard", 0));
    } // retranslateUi

};

namespace Ui {
    class mainBoard: public Ui_mainBoard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINBOARD_H
