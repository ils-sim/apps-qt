#ifndef MAIN_INTERFACE_H_
#define MAIN_INTERFACE_H_

enum ConnectionStatus_t
{
	NotConnected,
	Connected,
	Error,
};

class PluginObserver_t;

class MainInterface_t
{
public:
	MainInterface_t();

	void Attache(PluginObserver_t * observer);

	virtual void Send(boost::shared_ptr<Model_t> pPackage);

	volatile ConnectionStatus_t isConnected;

	virtual ~MainInterface_t();

private:
	vector<PluginObserver_t*> mObservers;
};

#endif
