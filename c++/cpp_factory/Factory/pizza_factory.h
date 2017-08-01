#ifndef _pizza_factory
#define _pizza_factory

#include "pizza.h"
#include <stack>

class pizza_factory
{
public:

	// Public Accessors
	// (typically leave this as void return type)
	static Pizza* createPizza()
	{
		return Instance().privCreatePizza();
	}

	static void recyclePizza(Pizza* ptrPizza)
	{
		Instance().privRecyclePizza(ptrPizza);
	}

private:
	
	//The factory is set up as a singleton
	static pizza_factory *ptrInstance;

	// Default constructor
	pizza_factory() = default;

	// Prevents copy-construction
	pizza_factory(const pizza_factory&) = delete;

	// Prevents assignment
	pizza_factory& operator = (const pizza_factory&) = delete;
	
	// Allows only the class to delete itself
	~pizza_factory();

	// Allows the factory to create itself when called
	static pizza_factory & Instance()
	{
		if (!ptrInstance)
		{
			ptrInstance = new pizza_factory;
		}
		return *ptrInstance;
	}

	// Methods
	Pizza* privCreatePizza();

	void privRecyclePizza(Pizza* ptrPizza);

	// Stack to hold pizzas
	std::stack<Pizza*> recycledItems;

};

#endif _pizza_factory
