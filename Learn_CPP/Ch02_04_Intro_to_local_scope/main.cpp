#include <iostream>

// lifetime of a local variable is a runtime property
// scope of a local variable is a compile-time property

int add(int x, int y)	// x and y created and initialized here
{
	int z{ x + y };		// z created and initialized here	

	return z;
} // z,y, and x destroyed here

// x is not in scope anywhere in this function
void doSomething()
{
	std::cout << "Hello!\n";
}

int main()
{
	std::cout << add(4, 5) << '\n';

	
	// x can not be used here because it's not in scope yet

	int x{ 0 };		// x enters scope here and can now be used

	doSomething();	// x is still alive during this function call

	return 0;
}	// x goes out of scope here and can no longer be used