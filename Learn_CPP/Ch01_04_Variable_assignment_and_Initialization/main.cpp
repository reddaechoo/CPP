#include <iostream>

int main()
{

	// Variable assignment
	int width;
	width = 5; // copy assignment of value 5 into variable width

	/*
		Copy assignment is named such because it copies the value 
		on the right - hand side of the = operator to the variable 
		on the left - hand side of the operator.
		The = operator is called the assignment operator.
	*/

	// variable width now has value 5

	width = 7; // change value stored in variable width to 7

	// variable width now has value 7


	// Copy and direct initialization
	// 1. Copy initialization
	int width2 = 5; // copy initialization of value 5 into variable width

	// 2. Direct initialization
	// for some advanced types, direct initialization can perform better than copy initialization
	int width3(5);// direct initialization of value 5 into variable width

	// 3. Brace initialization (uniform initialization, list initialization)
	// the direct form is generally preferred.
	int width4{ 5 }; // direct brace initialization of value 5 into variable width (preferred)
	int height = { 6 }; // copy brace initialization of value 6 into variable height

	//int width5{ 4.5 }; //the compiler will throw an warning or an error. 

	// 4. Zero initialization (if the value is temporary and will be replaced.)
	int width6{}; // zero initialization to value 0


	// Initializing multiple variables
	int a = 5, b = 6; // copy initialization
	int c(7), d(8); // direct initialization
	int e{ 9 }, f{ 10 }; // brace initialization (preferred)

	//int a2, b2 = 5; // wrong (a is not initialized!)

	return 0;
}
