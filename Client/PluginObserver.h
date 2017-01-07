#ifndef PLUGIN_OBSERVER_H_
#define PLUGIN_OBSERVER_H_

class MainInterface_t;

class PluginObserver_t
{
public:
	explicit PluginObserver_t(string Name, MainInterface_t * interface);

	virtual void Received_Package(boost::shared_ptr<Model_t> pModel) = 0;

	virtual ~PluginObserver_t();
	
	string getPluginName();

protected:
	MainInterface_t * GetInterface();

private:
	MainInterface_t * mpInterface;
	string mPluginName;
};

#endif // PLUGIN_OBSERVER_H_
