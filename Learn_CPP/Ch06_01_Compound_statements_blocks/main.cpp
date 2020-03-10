#include <iostream>

// Blocking nesting levels
// Keep the nesting level of your functions to 3 or less. If your function has a need for more, consider refactoring.

int main()
{ // nesting level 1
	std::cout << "Enter an integer: ";
	int value{};
	std::cin >> value;

	if (value > 0)
	{ // nesting level 2
		if ((value % 2) == 0)
		{ // nesting level 3
			std::cout << value << " is positive and even\n";
		}
		else
		{ // also nesting level 3
			std::cout << value << " is positive and odd\n";
		}
	}

	return 0;
}