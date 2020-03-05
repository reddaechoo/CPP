#include <iostream>

int main()
{
	// The comma operator
	// Avoid using the comma operator, except within for loops.
	/*
	int x{ 1 };
	int y{ 2 };

	//std::cout << (++x, ++y); // increment x and y, evaluates to the right operand
	++x;
	std::cout << ++y;
	
	*/

	/*
	z = (a, b); // evaluate (a, b) first to get result of b, then assign that value to variable z.
	z = a, b;	// evaluates as "(z = a), b", so z gets assigned the value of a, and b is evaluated and discarded
	*/


	// The conditional operator(arithmetic if)
	// Only use the conditional operator for simple conditionals where you use the result and where it enhances readability.
	// c ? x : y  // If c is nonzero (true) then evaluate x, otherwise evaluate y
	bool inBigClassroom{ false };
	const int classSize{ inBigClassroom ? 30 : 20 };
	std::cout << "The class size is: " << classSize;

	/*
	int x = 5;
	std::cout << (x != 5 ? x : "x is 5"); // won't compile
	*/

	return 0;
}