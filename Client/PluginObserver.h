#ifndef PLUGIN_OBSERVER_H_
#define PLUGIN_OBSERVER_H_

class MainInterface_t;

class PluginObserver_t
{
public:
	explicit PluginObserver_t(string const & Name, MainInterface_t * const interface);

	virtual void Received_Package(boost::shared_ptr<Model_t> pModel) = 0;

	virtual ~PluginObserver_t();

	string getPluginName() const;

protected:
	MainInterface_t * GetInterface() const;

private:
	MainInterface_t * const mpInterface;
	const string mPluginName;
};

#endif // PLUGIN_OBSERVER_H_
