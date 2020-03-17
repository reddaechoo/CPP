#include <iostream>

int main()
{
	// C-style casts
	//  C-style casts are at risk for being inadvertently misused, and not producing the expected behavior,
	//  something which is easily avoidable by using the C++ casts instead.
	/*
	int i1{ 10 };
	int i2{ 4 };
	float f{ float(i1) / i2 };	// i1: int -> float -> i2:int -> float -> result: float
	*/


	// static_cast
	/*
	char c{ 'a' };
	std::cout << c << ' ' << static_cast<int>(c) << '\n'; // prints a 97


	int i1{ 10 };
	int i2{ 4 };

	// convert an int to a float so we get floating point division rather than integer division
	float f{ static_cast<float>(i1) / i2 };
	std::cout << f << '\n';
	*/


	// Using casts to make implicit type conversions clear
	/*
	int i{ 48 };

	// explicit conversion from int to char, so that a char is assigned to variable ch
	char ch = static_cast<char>(i); // intended
	*/

	int i{ 100 };
	//i = i / 2.5; // the compiler will typically complain that converting a double to an int may result in loss of data
	i = static_cast<int>(i / 2.5);

	std::cout << i << '\n';

	return 0;
}