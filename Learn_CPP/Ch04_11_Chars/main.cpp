#include <iostream>

int main()
{
	// Printing chars as integers via type casting
	/*
	char ch{ 'a' };
	std::cout << ch << '\n';
	std::cout << static_cast<int>(ch) << '\n';
	std::cout << ch << '\n';
	*/

	// Inputting chars
	/*
	std::cout << "\n\n";
	std::cout << "Input a keyboard character: ";

	char ch{};
	std::cin >> ch;
	std::cout << ch << " has ASCII code " << static_cast<int>(ch) << '\n';
	*/

	// Inputting multiple chars
	std::cout << '\n';

	std::cout << "Input a keyboard character: "; // assume the user enters "abcd" (without quotes)

	char ch{};
	std::cin >> ch; // ch = 'a', "bcd" is left queued
	std::cout << ch << " has ASCII code " << static_cast<int>(ch) << '\n';

	// Note: The following cin does'nt ask the user for input, it grabs queued input!
	std::cin >> ch; // ch = 'b', "cd" is left queued
	std::cout << ch << " has ASCII code " << static_cast<int>(ch) << '\n';

	return 0;
}