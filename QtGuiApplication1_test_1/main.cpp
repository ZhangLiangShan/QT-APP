#include "QtGuiApplication1_test_1.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QtGuiApplication1_test_1 w;
	w.show();
	return a.exec();
}
