#include <string>

using namespace std;

#include <boost/shared_ptr.hpp>

#include "Models/Model.h"
#include "PluginObserver.h"
#include "LogViewer.h"

LogViewer::LogViewer(MainInterface_t * interface)
	: PluginObserver_t("LogViewer", interface)
{
}
