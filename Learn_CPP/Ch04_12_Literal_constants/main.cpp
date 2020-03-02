#include <iostream>
#include <bitset> // for std::bitset

int main()
{
	// Octal and hexadecimal literals
	//int x{ 012 }; // 0 before the number means this is octal
	//std::cout << x << '\n';


	// Hexadecimal
	int y{ 0xF }; // 0x before the number means this is hexadecimal
	std::cout << y << '\n';


	// binary literals and digit separators
	/*
	int bin{};
	bin = 0b1;			// assign binary 0000 0001 to the variable
	bin = 0b11;			// assign binary 0000 0011 to the variable
	bin = 0b1010;		// assign binary 0000 1010 to the variable
	bin = 0b11110000;	// assign binary 1111 0000 to the variable

	std::cout << '\n';
	int bin1{ 0b1011'0010 }; // assign binary 1011 0010 to the variable
	long value{ 2'132'673'462 }; // much easier to read than 2132673462
	*/

	// Printing decimal, octal, hexadecimal
	std::cout << '\n';
	int x{ 12 };
	std::cout << x << '\n'; // decimal (by default)
	std::cout << std::hex << x << '\n'; // hexadecimal
	std::cout << x << '\n'; // now hexadecimal
	std::cout << std::oct << x << '\n'; // octal
	std::cout << std::dec << x << '\n'; // return to decimal
	std::cout << x << '\n'; // decimal


	// Printing binary numbers
	// std::bitset<8> means we want to store 8 bits
	std::bitset<8> bin1{ 0b1100'0101 }; // binary literal for binary 1100 0101
	std::bitset<8> bin2{ 0xC5 }; // hexadecimal literal for binary 1100 0101

	std::cout << '\n' << bin1 << ' ' << bin2 << '\n';
	std::cout << std::bitset<4> {0b1010} << '\n'; // we can also prit from std::bitset directly


	return 0;
}