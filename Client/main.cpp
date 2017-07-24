#include <string>
#include <iostream>

using namespace std;

#include "MainWindow.h"
#include <QApplication>

#include "Models/Model.h"
#include "MainInterface.h"
#include "PluginObserver.h"
#include "LogViewer.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	MainWindow w;
	w.show();

	Point_t point;
	cout << "is Zerro: " << point.isZerro() << endl;

	MainInterface_t m;
	LogViewer logger("MainLogger", &m);

	boost::shared_ptr<Point_t> pPoint(new Point_t(1, 2));
	m.Send(pPoint);

	return a.exec();
}
