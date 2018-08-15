#include "CommandBroker.h"
#include "CommandBase.h"

void CommandBroker::addCommand(CommandBase* _cmd)
{
	// Insert into the list
	commandList.insert(commandList.end(), _cmd);
}

void CommandBroker::ProcessCommands()
{
	// Set iterator to beginning of list
	it = commandList.begin();

	// Loop through list
	for (it; it != commandList.end(); it++)
	{
		// Execute the command
		(*it)->execute();

		// In this case, delete the command
		delete (*it);
	}

	commandList.clear();
	
}