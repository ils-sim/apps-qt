#include <string>
#include <vector>

using namespace std;

#include <boost/shared_ptr.hpp>

#include "com_log/Log.h"

#include "Models/Model.h"
#include "PluginObserver.h"
#include "MainInterface.h"

MainInterface_t::MainInterface_t()
	: isConnected(NotConnected)
{
}

void MainInterface_t::Attache(PluginObserver_t * observer)
{
	mObservers.push_back(observer);
}

void MainInterface_t::Received_Package(boost::shared_ptr<Model_t> pPackage)
{
	Log::GetInstance()->WriteDebug("Client_Interface::Received_Package");
	for(vector<PluginObserver_t*>::iterator iter = mObservers.begin(); iter != mObservers.end(); ++iter)
	{
		(*iter)->Received_Package(pPackage);
	}
}

MainInterface_t::~MainInterface_t()
{
}
