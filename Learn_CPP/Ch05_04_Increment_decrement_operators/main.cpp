#include <iostream>

int add(int x, int y)
{
	return x + y;
}

int main()
{
	// Incrementing and decrementing variables
	// prefix
	//int x{ 5 };
	//int y = ++x; // x is incremented to 6, x is evaluated to the value 6, and 6 is assigned to y

	//std::cout << x << ' ' << y;


	// postfix
	/*
	int x{ 5 };
	int y = x++; // First, a temporary copy of x is made that starts with the same value as x (5).
				 // Then the actual x is incremented from 5 to 6.
				 // Then the copy of x (which still has value 5) is returned and assigned to y.
				 // Then the temporary copy is discarded

	std::cout << x << ' ' << y;
	*/


	// Strongly favor the prefix version of the increment and decrement operators,
	// as they are generally more performant, and you¡¯re less likely to run into strange issues with them.
	/*
	int x{ 5 };
	int y{ 5 };
	std::cout << x << " " << y << '\n';
	std::cout << ++x << " " << --y << '\n'; // prefix
	std::cout << x << " " << y << '\n';
	std::cout << x++ << " " << y-- << '\n'; // postfix
	std::cout << x << " " << y << '\n';
	*/


	// C++ does not define the order of evaluation for function arguments or operator operands.
	int x{ 5 };
	int value = add(x, ++x); // is this 5 + 6, or 6 + 6?
	// It depends on what order your compiler evaluates the function arguments in

	std::cout << value; // value could be 11 or 12, depending on how the above line evalutes!

	return 0;
}