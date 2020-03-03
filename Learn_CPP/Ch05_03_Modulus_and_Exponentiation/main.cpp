#include <iostream>
#include <cmath>



int main()
{
	// The modulus operator
	// Modulus only works with integer operands
	/*std::cout << "Enter an integer: ";
	int x{};
	std::cin >> x;

	std::cout << "Enter another integer: ";
	int y{};
	std::cin >> y;

	std::cout << "The remainder is: " << x % y << '\n';

	if ((x%y) == 0)
		std::cout << x << " is evenly divisible by " << y << '\n';
	else
		std::cout << x << " is not evenly divisible by " << y << '\n';*/



	// the exponent operator
	double x{ std::pow(3.0, 4.0) };

	std::cout << "3 to the 4th power: " << x << '\n';

	return 0;
}