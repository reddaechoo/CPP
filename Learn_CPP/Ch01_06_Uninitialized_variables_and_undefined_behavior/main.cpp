// Initialization = The object is given a known value at the point of definition.
// Assignment = The object is given a known value beyond the point of definition.
// Uninitialized = The object has not been given a known value yet.

// Using the values of uninitialized variables can lead to unexpected results. Consider the following short program:
#include <iostream>

void doNothing(const int &x) // Don't worry about what &x is for now, we're just using it to trick the compiler into thinking variable x is used
{
}

int main()
{
	// define an integer variable named x
	int x; // this variable is uninitialized

	doNothing(x); // make compiler think we're using this variable

	// print the value of x to the screen (who knows what we'll get, because x is uninitialized)
	std::cout << x;

	return 0;
}

