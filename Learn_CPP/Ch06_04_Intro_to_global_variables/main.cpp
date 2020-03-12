#include <iostream>

// Declaring and naming global variables
/*
int g_x{}; // global variable g_x

void doSomething()
{
	// global variables can be seen and used anywhere in the file
	g_x = 3;
	std::cout << g_x << '\n';
}
*/

// Constant global variables
//const int g_x; // error: constant variables must be initialized
//constexpr int g_w; // error: constant variables must be initialized

const int g_y{ 1 };	// const global variable g_y, initialized with a value
constexpr int g_z{ 2 };	// constexpr global variable g_z, initialized wit a value

void doSomething()
{
	// global variables can be seen and used everywhere in the file
	std::cout << g_y << '\n';
	std::cout << g_z << '\n';
}

int main()
{
	// Declaring and naming global variables
	/*
	doSomething();
	std::cout << g_x << '\n';

	// global variables can be seen and used everywhere in the file
	g_x = 5;
	std::cout << g_x << '\n';
	*/

	doSomething();

	// global variables can be seen and used everywhere in the file
	std::cout << g_y << '\n';
	std::cout << g_z << '\n';

	return 0;
}