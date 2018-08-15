#ifndef _CommandBroker
#define _CommandBroker

#include <list>

class CommandBase;

class CommandBroker
{
public:
	void addCommand(CommandBase* _cmd);
	void ProcessCommands();

private:
	using CommandList = std::list<CommandBase*>;
	CommandList commandList;

	using CommandIterator = CommandList::iterator;
	CommandIterator it;
};

#endif _CommandBroker