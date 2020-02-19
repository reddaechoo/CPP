#include <iostream>

int main()
{
	std::cout << "Enter an integer: ";

	int num{ 0 };		// define variable num as an integer variable
	std::cin >> num;	// get integer value from user's keyboard

	//num = num * 2;		// double num's value, then assign that value back to num
	//std::cout << "Double that number is: " << num << '\n';

	//int doublenum{ num * 2 };
	//std::cout << "Double that number is: " << doublenum << '\n';

	//std::cout << "Double that number is: " << num * 2 << '\n';

	std::cout << "Double 4 is:" << num * 4 << '\n';
	std::cout << "Double 8 is:" << num * 8 << '\n';

	return 0;
}