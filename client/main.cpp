#include <string>
#include <iostream>

using namespace std;

#include "mainwindow.h"
#include <QApplication>

#include "point.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	MainWindow w;
	w.show();

	Point_t point;
	cout << "is Zerro: " << point.isZerro() << endl;;

	return a.exec();
}
