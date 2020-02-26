#include <iostream>

int main()
{
	/*
	Range : 0 ~ (2 ^ #bits) -1
	
	unsigned shrot			1 bytes
	unsigned int			4 bytes
	unsigned long			4 bytes
	unsigned long long		8 bytes

	*/

	// 'wrap around' OR 'modulo wrapping'
	// if a value is out of range, it is divided by one greater than the largest number of the type, 
	// and only the remainder kept.
	unsigned short x{ 65535 }; // largest 16-bit unsigned value possible
	std::cout << "x was: " << x << '\n';

	x = 65536; // 65536 is out of our range, so we get wrap-around
	std::cout << "x is now: " << x << '\n';

	x = 65537; // 65537 is out of our range, so we get warp-around
	std::cout << "x is now: " << x << '\n';


	unsigned short xx{ 0 }; // smallest 2-byte unsigned value possible
	std::cout << "xx was: " << xx << '\n';

	xx = -1; // -1 is out of our range, so we get wrap-around
	std::cout << "xx is now: " << xx << '\n';

	xx = -2; // -2 is out of our range, so we get warp-around
	std::cout << "xx is now: " << xx << '\n';

	return 0;
}