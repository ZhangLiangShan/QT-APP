#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtGuiApplication1_test_1.h"

class QtGuiApplication1_test_1 : public QMainWindow
{
	Q_OBJECT

public:
	QtGuiApplication1_test_1(QWidget *parent = Q_NULLPTR);

private:
	Ui::QtGuiApplication1_test_1Class ui;
};
