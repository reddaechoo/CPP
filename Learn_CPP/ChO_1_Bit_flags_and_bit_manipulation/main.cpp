#include <iostream>
#include <bitset> // for std::bitset

// Bit manipulation: Modifying individual bits within an object
// Bit flags: When individual bits of an object are used as Boolean values, the bits are called Bit flags


// Bit numbering and bit positions
// 76543210 Bit position
// 00000101 Bit sequence

int main()
{
	// Manipulating bits via std::bitset
	/*
		test()  : allows us to query whether a bit is a 0 or 1
		set()   : allows us to turn a bit on (this will do nothing if the bit is already on)
		reset() : allows us to turn a bit off (this will do nothing if the bit is already off)
		flip()  : allows us to flip a bit value from a 0 to a 1 vice versa

		¡Ø Each of these functioins takes a bit-position argument indicating which bit position we want operated on.
	*/

	std::bitset<8> bits{ 0b0000'0101 }; // we need 8 bits, start with bit pattern 0000 0101
	bits.set(3);	// set bit position 3 to 1 (now we have 0000 1101)
	bits.flip(4);	// flip bit (now we have 0001 1101)
	bits.reset(4);	// set bit 4 back to 0 (now we have 0000 1101)

	std::cout << "All the bits: " << bits << '\n';
	std::cout << "Bit 3 has value: " << bits.test(3) << '\n';
	std::cout << "Bit 4 has value: " << bits.test(4) << '\n';

	return 0;
}