#include <iostream>

int main()
{
	std::cout << "bool:\t\t" << sizeof(bool) << " bytes\n";					// 1 byte
	std::cout << "char:\t\t" << sizeof(char) << " bytes\n";					// 1 byte
	std::cout << "wchar_t:\t" << sizeof(wchar_t) << " bytes\n";				// 2 bytes
	std::cout << "char16_t:\t" << sizeof(char16_t) << " bytes\n";			// 2 bytes
	std::cout << "char32_t:\t" << sizeof(char32_t) << " bytes\n";			// 4 bytes
	std::cout << "short:\t\t" << sizeof(short) << " bytes\n";				// 2 bytes
	std::cout << "int:\t\t" << sizeof(int) << " bytes\n";					// 4 bytes
	std::cout << "long:\t\t" << sizeof(long) << " bytes\n";					// 4 bytes
	std::cout << "long long:\t" << sizeof(long long) << " bytes\n";			// 8 bytes
	std::cout << "float:\t\t" << sizeof(float) << " bytes\n";				// 4 bytes
	std::cout << "double:\t\t" << sizeof(double) << " bytes\n";				// 8 bytes
	std::cout << "long double:\t" << sizeof(long double) << " bytes\n";		// 8 bytes

	int x{};
	std::cout << "x is " << sizeof(x) << " bytes\n";

	return 0;
}