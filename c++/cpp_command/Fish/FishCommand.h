#ifndef _FishCommand
#define _FishCommand

#include "CommandBase.h"

class FishCommand : public CommandBase
{
public:
	FishCommand() = default;
	void execute() override;
};

#endif _FishCommand