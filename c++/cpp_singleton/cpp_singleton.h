// Joseph Walker, July 2017

#ifndef _cpp_singleton
#define _cpp_singleton

class cpp_singleton
{
private:

	// This is a pointer to the instance of this class
	static cpp_singleton *ptrInstance;

	// This is a default constructor
	cpp_singleton() = default;

	// This is to prevent copy-construction
	cpp_singleton(const cpp_singleton&) = delete;

	// This is to prevent assignment
	cpp_singleton& operator = (const cpp_singleton&) = delete;

	// This allows only the class to delete itself
	~cpp_singleton() = delete;

	// This allows the class to create itself when called
	// And return the instance

	static cpp_singleton & Instance()
	{
		// If the instance doesn't exist, create it
		if (!ptrInstance)
		{
			ptrInstance = new cpp_singleton;
		}

		// Regardless, return the instance
		return *ptrInstance;
	}
};

#endif _cpp_singleton