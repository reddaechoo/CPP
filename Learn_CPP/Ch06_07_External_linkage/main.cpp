// external linkage can be seen and used both from the file in which it is defined,
// and from other code files (via a forward declaration)
// functions have external linkage by default.

#include <iostream>

void sayHi(); // forward declaration for function sayHi, makes sayHi accessible in this file

extern int g_x; // this extern is a forward declaration of a variable named g_x that is defined somewhere else
extern const int g_y; // this extern is a forward declaration of a const variable named g_y that is defined somewhere else

int main()
{
	sayHi(); // call to function defined in another file, linker will connect this call to the function definition

	std::cout << g_x; // prints 2

	return 0;
}

