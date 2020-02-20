#include <iostream>

//Example #1
//int add(int x, int y); // needed so main.cpp knows that add() is a function declared elsewhere


//Example #2
int getInteger();

int main()
{
	//Example #1
	//std::cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n'; // compile error
	

	//Example #2
	int x{ getInteger() };
	int y{ getInteger() };

	std::cout << x << " + " << y << " is " << x + y << '\n';
	return 0;
}