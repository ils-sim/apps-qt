#ifndef LOG_VIEWER_H_
#define LOG_VIEWER_H_

class LogViewer : public PluginObserver_t
{
public:
	explicit LogViewer(string const & loggerName, MainInterface_t * const interface);

	void Received_Package(boost::shared_ptr<Model_t> pModel);

	virtual ~LogViewer();

private:
	const string mLoggerName;
};

#endif
