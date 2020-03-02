#include <iostream>

// Boolean return values
// returns true if x and y are equal, false otherwise
bool isEqual(int x, int y)
{
	return (x == y); // operator == returns true if x equals y, and false otherwise
}

int main()
{
	/*
	// Printing Boolean variables
	std::cout << true << std::endl; // true evaluates to 1
	std::cout << !true << std::endl; // !true evaluates to 0

	bool b{ false };
	std::cout << b << std::endl; // b is false, which evaluates to 0
	std::cout << !b << std::endl; // !b is true, which evaluates to 1


	// Printing "true" or "false" instead of 0 or 1
	std::cout << "\n\n";
	std::cout << true << std::endl;
	std::cout << false << std::endl;

	std::cout << std::boolalpha; // print bools as true or false, "std::noboolalpha" to turn it back off

	std::cout << true << std::endl;
	std::cout << false << std::endl;


	// Integer to Boolean conversion
	//std::cout << "\n\n";
	//bool b1{ 4 }; // error: narrowing conversions disallowed
	//std::cout << b1;

	std::cout << "\n\n";
	std::cout << std::boolalpha; // print bools as true or false

	bool b1 = 4; // copy initialization allows implicit conversion from int to bool
	std::cout << b1 << '\n';

	bool b2 = 0; // copy initialization allows implicit conversion from int to bool
	std::cout << b2 << '\n';


	// Inputting  Boolean values
	std::cout << "\n\n";
	bool b3{}; // default initialize to false (0)
	std::cout << "Enter a boolean value: ";
	std::cin >> b3;
	std::cout << "You entered: " << b3;
	*/


	// Boolean return values
	std::cout << "\n\n";
	std::cout << "Enter an integer: ";
	int x{ 0 };
	std::cin >> x;

	std::cout << "Enter another integer: ";
	int y{ 0 };
	std::cin >> y;

	std::cout << std::boolalpha; // print bools as true or false

	std::cout << x << " and " << y << " are equal? ";
	std::cout << isEqual(x, y); // will return true or false

	return 0;
}