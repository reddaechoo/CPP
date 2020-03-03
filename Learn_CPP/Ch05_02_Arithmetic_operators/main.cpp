#include <iostream>

int main()
{
	// Using static_cast<> to do floating point division with integers
	int x{ 7 };
	int y{ 4 };

	std::cout << "int / int = " << x / y << "\n";
	std::cout << "double / int = " << static_cast<double>(x) / y << "\n";
	std::cout << "int / double = " << x / static_cast<double>(y) << "\n";
	std::cout << "double / double = " << static_cast<double>(x) / static_cast<double>(y) << "\n";

	return 0;
}