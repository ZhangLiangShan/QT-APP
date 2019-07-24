/********************************************************************************
** Form generated from reading UI file 'QtGuiApplication1_test_1.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTGUIAPPLICATION1_TEST_1_H
#define UI_QTGUIAPPLICATION1_TEST_1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtGuiApplication1_test_1Class
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtGuiApplication1_test_1Class)
    {
        if (QtGuiApplication1_test_1Class->objectName().isEmpty())
            QtGuiApplication1_test_1Class->setObjectName(QStringLiteral("QtGuiApplication1_test_1Class"));
        QtGuiApplication1_test_1Class->resize(600, 400);
        menuBar = new QMenuBar(QtGuiApplication1_test_1Class);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        QtGuiApplication1_test_1Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtGuiApplication1_test_1Class);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QtGuiApplication1_test_1Class->addToolBar(mainToolBar);
        centralWidget = new QWidget(QtGuiApplication1_test_1Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QtGuiApplication1_test_1Class->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(QtGuiApplication1_test_1Class);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QtGuiApplication1_test_1Class->setStatusBar(statusBar);

        retranslateUi(QtGuiApplication1_test_1Class);

        QMetaObject::connectSlotsByName(QtGuiApplication1_test_1Class);
    } // setupUi

    void retranslateUi(QMainWindow *QtGuiApplication1_test_1Class)
    {
        QtGuiApplication1_test_1Class->setWindowTitle(QApplication::translate("QtGuiApplication1_test_1Class", "QtGuiApplication1_test_1", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QtGuiApplication1_test_1Class: public Ui_QtGuiApplication1_test_1Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTGUIAPPLICATION1_TEST_1_H
