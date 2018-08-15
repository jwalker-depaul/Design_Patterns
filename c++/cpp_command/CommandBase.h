#ifndef _CommandBase
#define _CommandBase

#include <stdio.h>

class CommandBase
{
public:
	virtual void execute() = 0; // Abstract method
};

#endif _CommandBase