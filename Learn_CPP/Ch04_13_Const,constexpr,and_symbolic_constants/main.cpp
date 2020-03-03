#include "constants.h"
#include <iostream>

int main()
{
	// Const variables
	// Any variable that should not be modifiable after initialization and whose initializer is known at compile-time
	// should be declared as constexpr.
	/*
	const double gravity{ 9.8 }; // preferred use of const before type
	int const sidesInSqaure{ 4 }; // okay, but not preferred
	*/

	// gravity = 9.9; // not allowed, this will cause a compile error
	// const double gravity; // compiler error, must be initialized upon definition

	// Const variables can be initialized from other variables
	/*
	std::cout << "Enter your age: ";
	int age;
	std::cin >> age;

	const int userAge{ age }; // userAge can not be changed
	*/


	// constexpr
	// : ensures that a constant must be a compile-time constant
	// Any variable that should not be modifiable after initialization and whose initializer is not known at compile-time
	// should be declared as const
	/*
	constexpr double gravity{ 9.8 }; // ok, the value of 9.8 can be resolved at compile-time
	constexpr int sum{ 4 + 5 };		 // ok, the value of 4 + 5 can be resolved at compile-time

	std::cout << "Enter your age: ";
	int age;
	std::cin >> age;
	//constexpr int myAge{ age }; // not okay, age can not be resolved at compile-time
	const int myAge{ age };
	*/


	// Use constexpr variables
	// A better way to create symbolic constants is through use of constexpr variables
	// Avoid using #define to create symbolic constants macros
	/*constexpr int maxStudentsPerClass{ 30 };
	constexpr int maxNameLength{ 30 };*/


	// Using symbolic constants throughout a multi-file program
	std::cout << "Enter a radius: ";
	int radius{};
	std::cin >> radius;

	double circumference{ 2 * radius*constants::pi };
	std::cout << "The circumference is: " << circumference;

	return 0;

}