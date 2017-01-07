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

	virtual void Send(boost::shared_ptr<Model_t> pPackage) = 0;

	volatile ConnectionStatus_t isConnected;

	virtual ~MainInterface_t();

protected:
	void Received_Package(boost::shared_ptr<Model_t> pPackage);

private:
	vector<PluginObserver_t*> mObservers;
};

#endif
