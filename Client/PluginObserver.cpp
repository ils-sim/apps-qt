#include <string>
#include <vector>

using namespace std;

#include <boost/shared_ptr.hpp>

#include "Models/Model.h"
#include "MainInterface.h"
#include "PluginObserver.h"

PluginObserver_t::PluginObserver_t(string Name, MainInterface_t * interface)
{
	mPluginName = Name;
	mpInterface = interface;
	interface->Attache(this);
}

PluginObserver_t::~PluginObserver_t()
{
}

string PluginObserver_t::getPluginName()
{
	return mPluginName;
}

MainInterface_t * PluginObserver_t::GetInterface()
{
	return mpInterface;
}
