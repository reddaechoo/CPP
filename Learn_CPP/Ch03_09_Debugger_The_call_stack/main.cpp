/*
 'Call stack' : a list of all the active functions that have been called to get to the current point of execution
*/

#include <iostream>

void a()
{
	std::cout << "a() called\n";
}

void b()
{
	std::cout << "b() called\n";
	a();
}

int main()
{
	a();
	b();

	return 0;
}