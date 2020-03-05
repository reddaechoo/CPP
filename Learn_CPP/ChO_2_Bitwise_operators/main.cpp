#include <iostream>
#include <bitset> // for std::bitset

// The bitwise operators

/*
	1) left shift  , << , x << y , all bits in x shifted left y bits
		: 0011 << 1 is 0110
		: 0011 << 2 is 1100
		: 0011 << 3 is 1000

	2) right shift , >> , x >> y , all bits in x shifted right y bits
		: 1100 >> 1 is 0110
		: 1100 >> 2 is 0011
		: 1100 >> 3 is 0001

	3) bitwise NOT ,  ~ ,     ~x , all bits in x flipped
		:	   ~0100 is 1011
		: ~0000 0100 is 1111 1011

	4) bitwise AND ,  & ,  x & y , each bit in x AND each bit in y
		: 0b0101 & 0b0110
		: 0 1 0 1 AND
		  0 1 1 0
		  -------
		  0 1 0 0

	5) bitwise OR  ,  | ,  x | y , each bit in x OR each bit in y
		: 0b0101 | 0b0110
		: 0 1 0 1 OR
		  0 1 1 0
		  -------
		  0 1 1 1

	6) bitwise XOR ,  ^ ,  x ^ y , each bit in x XOR each bit in y
		: 0b0110 ^ 0b0011
		: 0 1 1 0 XOR
		  0 0 1 1
		  -------
		  0 1 0 1


		  0 0 0 1 XOR
		  0 0 1 1 XOR
		  0 1 1 1
		  -------
		  0 1 0 1
*/

// Bitwise assignment operatos
/*
	Left shift assignment	, <<= , x <<= y , Shift x left by y bits
	Right shifht assignment	, >>= , x >>= y , Shift x right by y bits
	Bitwise OR assignment	,  != ,  x != y , Assign x | y to x
	Bitwise AND assignment	,  &= ,  x &= y , Assign x & y to x
	Bitwise XOR assignment	,  ^= ,  x ^= y , Assign x ^ y to x
*/

int main()
{
	// Bitwise left shift (<<) and bitwise right shift (>>) operators
	/*
	std::bitset<4> x{ 0b1100 };

	std::cout << x << '\n';
	std::cout << (x >> 1) << '\n'; // shift right by 1, yielding 0110
	std::cout << (x << 1) << '\n'; // shift left by 1, yielding 1000
	*/


	// std::cout << and std::in >> operater overloaded
	/*
	unsigned int x{ 0b0100 };
	x = x << 1; // use operator << for left shift
	std::cout << std::bitset<4>{x}; // use operator << for output
	*/


	// If you're using operator << for both output and left shift, parenthesization is required
	/*
	std::bitset<4> x{ 0b0110 };

	std::cout << x << 1 << '\n'; // print value of x (0110), then 1
	std::cout << (x << 1) << '\n'; // print x left shifted by 1 (1100)
	*/


	// Bitwise NOT
	//std::cout << std::bitset<4> {~0b0100u} << ' ' << std::bitset<8>{~0b0100u};


	// Bitwise OR
	//std::cout << (std::bitset<4>{0b0101} | std::bitset<4>{0b0110});


	// Bitwise AND
	std::cout << (std::bitset<4>{0b0001} &std::bitset<4>{0b0011} &std::bitset<4>{0b0111});

	return 0;
}