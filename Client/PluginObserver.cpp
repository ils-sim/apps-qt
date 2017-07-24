#include <string>
#include <vector>

using namespace std;

#include <boost/shared_ptr.hpp>

#include "Models/Model.h"
#include "MainInterface.h"
#include "PluginObserver.h"

PluginObserver_t::PluginObserver_t(string const & Name, MainInterface_t * const interface)
	: mpInterface(interface), mPluginName(Name)
{
	interface->Attache(this);
}

PluginObserver_t::~PluginObserver_t()
{
}

// cppcheck-suppress unusedFunction
string PluginObserver_t::getPluginName() const
{
	return mPluginName;
}

// cppcheck-suppress unusedFunction
MainInterface_t * PluginObserver_t::GetInterface() const
{
	return mpInterface;
}
