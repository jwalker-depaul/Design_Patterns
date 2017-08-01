#include "pizza_factory.h";
#include <stdio.h>

// Initialize the factory instance to null
pizza_factory *pizza_factory::ptrInstance = nullptr;

Pizza* pizza_factory::privCreatePizza()
{
	// Creates a pizza pointer
	Pizza *ptrPizza;

	// If there are no recycled pizzas
	if (recycledItems.empty())
	{
		printf("Creating new pizza");

		// Calls the Pizza constructor
		ptrPizza = new Pizza();
	}
	else
	{
		printf("Recycling pizza");

		// Grab pizza from top of the recycled pizza stack
		ptrPizza = recycledItems.top();

		// Remove top pizza from stack
		recycledItems.pop();
	}
	return ptrPizza;
}

void pizza_factory::privRecyclePizza(Pizza* ptrPizza)
{
	// Pushes pizza to stack of unused pizzas
	recycledItems.push((Pizza*)ptrPizza);
	printf("Recycled stack size: " + recycledItems.size());
}

pizza_factory::~pizza_factory()
{
	// Forces the deletion of all recycled pizzas
	while (!recycledItems.empty())
	{
		delete recycledItems.top();
		recycledItems.pop();
	}
}