#include "DogCommand.h"
#include "CatCommand.h"
#include "FishCommand.h"

#include "CommandBroker.h"

int main()
{
	CommandBroker broker;

	// Create commands
	for (int i = 0; i < 3; i++)
	{
		DogCommand* dog = new DogCommand();
		CatCommand* cat = new CatCommand();
		FishCommand* fish = new FishCommand();

		broker.addCommand(dog);
		broker.addCommand(cat);
		broker.addCommand(fish);
	}

	broker.ProcessCommands();

	system("pause");

	return 0;
}