#include <iostream>

// A definition is needed to satisfy the linker
// A declaration is all that is needed to satisfy the compiler

int add(int x, int y);	// forward declaration of add() (using a function prototype)

int main()
{
	std::cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n'; // this works because we forward declared add() above
	return 0;
}

int add(int x, int y)	// even though the body of add() isn't defined until here
{
	return x + y;
}