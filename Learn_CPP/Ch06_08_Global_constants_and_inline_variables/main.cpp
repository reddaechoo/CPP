#include <iostream>

// Global constants as internal variables
//#include "constants.h" // include a copy of each constant in this file
					   // each of these variables is copied into the including code file.


// Global constants as external variables
#include "constants.h"  // include all the forward declarations

int main()
{
	std::cout << "Enter a radius: ";
	int radius{};
	std::cin >> radius;

	std::cout << "The circumference is: " << 2 * radius * constants::pi;

	return 0;
}