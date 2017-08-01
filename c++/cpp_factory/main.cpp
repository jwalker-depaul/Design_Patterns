#include "pizza_factory.h"

void main()
{
	// Create 3 pizzas
	Pizza* pizza_1 = pizza_factory::createPizza();
	Pizza *pizza_2 = pizza_factory::createPizza();
	Pizza *pizza_3 = pizza_factory::createPizza();

	printf("");

	// Recycle pizza
	pizza_factory::recyclePizza(pizza_1);

	printf("");

	// Reuse pizza
	pizza_3 = pizza_factory::createPizza();

	printf("");

	// Create an additional pizza
	Pizza *pizza_4 = pizza_factory::createPizza();
	
	// Program end. Should print the following:

	/*
		Creating new pizza
		Created pizza
		Creating new pizza
		Created pizza
		Creating new pizza
		Created pizza

		Recycled stack size: 1

		Recycling pizza

		Creating new pizza
		Created pizza


	*/
}