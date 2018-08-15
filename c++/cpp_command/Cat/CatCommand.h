#ifndef _CatCommand
#define _CatCommand

#include "CommandBase.h"

class CatCommand : public CommandBase
{
public:
	CatCommand() = default;
	void execute() override;
};

#endif _CatCommand