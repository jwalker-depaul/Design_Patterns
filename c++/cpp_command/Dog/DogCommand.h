#ifndef _DogCommand
#define _DogCommand

#include "CommandBase.h"

class DogCommand : public CommandBase
{
public:
	DogCommand() = default;
	void execute() override;
};

#endif _DogCommand