#include <iostream>

// Static local variables
// : Using the static keyword on a local variable changes its duration from automatic duration to static duration.
//   This means the variable is now created at the start of the program, 
//   and destroyed at the end of the program(just like a global variable).
//   As a result, the static variable will retain its value even after it goes out of scope!

void incrementAndPrint()
{
	// automatic duration by default
	//int value{ 1 }; 
	//++value;
	//std::cout << value << '\n';
	
	// static duration via static keyword
	static int s_value{ 1 }; // This initializer is only excuted once.
	++s_value;
	std::cout << s_value << '\n';
} // s_value is not destroyed here, but becomes inaccessible because it goes out of scope

int main()
{
	incrementAndPrint();
	incrementAndPrint();
	incrementAndPrint();

	return 0;
}