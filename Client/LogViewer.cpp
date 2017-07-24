#include <string>
#include <iostream>

using namespace std;

#include <boost/shared_ptr.hpp>

#include "Models/Model.h"
#include "PluginObserver.h"
#include "LogViewer.h"

LogViewer::LogViewer(string loggerName, MainInterface_t * interface)
	: PluginObserver_t("LogViewer", interface), mLoggerName(loggerName)
{
}

void LogViewer::Received_Package(boost::shared_ptr<Model_t> pModel)
{
	cout << mLoggerName << ": " << pModel->Package2String() << endl;
	cout << mLoggerName << ": " << pModel->ToString() << endl;
}

LogViewer::~LogViewer()
{
}
