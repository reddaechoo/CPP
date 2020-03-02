#include <iostream>
#include <cstdint>

int main()
{
	// Fixed-width integers
	std::cout << "Fixed-width integers" << '\n';
	std::cout << "size of int8_t:\t\t" << sizeof(int8_t) << "bytes\n";
	std::cout << "size of uint8_t:\t" << sizeof(uint8_t) << "bytes\n";
	std::cout << "size of int16_t:\t" << sizeof(int16_t) << "bytes\n";
	std::cout << "size of uint16_t:\t" << sizeof(uint16_t) << "bytes\n";
	std::cout << "size of int32_t:\t" << sizeof(int32_t) << "bytes\n";
	std::cout << "size of uint32_t:\t" << sizeof(uint32_t) << "bytes\n";
	std::cout << "size of int64_t:\t" << sizeof(int64_t) << "bytes\n";
	std::cout << "size of uint64_t:\t" << sizeof(uint64_t) << "bytes\n";


	// Fast and least integers
	// Fast type(std::int_fast#_t) provides the fastest signed integer type with a width of at least # bits(#:8,16,32,64)
	// Least type(std::int_least#_t) provides the smallest signed integer type with a width of at least # bits(#:8,16,32,64)
	std::cout << "\n\nFast integers" << '\n';
	std::cout << "fast 8: " << sizeof(std::int_fast8_t) * 8 << " bits\n";
	std::cout << "fast 16: " << sizeof(std::int_fast16_t) * 8 << " bits\n";
	std::cout << "fast 32: " << sizeof(std::int_fast32_t) * 8 << " bits\n";


	std::cout << "\n\nLeast integers" << '\n';
	std::cout << "least 8: " << sizeof(std::int_least8_t) * 8 << " bits\n";
	std::cout << "least 16: " << sizeof(std::int_least16_t) * 8 << " bits\n";
	std::cout << "least 32: " << sizeof(std::int_least32_t) * 8 << " bits\n";


	// Warning: std::int8_t and std::uint8_t may behave like chars instead of integers
	std::cout << "\n\nstd::int8_t and std::uint8_t may behave like chars" << '\n';
	std::int8_t myint = 65;
	std::cout << myint << '\n';


	// 'std::size_t' type
	// sizeof returns a value of type std::size_t
	// std::size_t is defined an unsigned integral type, and it is typically used to represent the size or length of objects
	std::cout << "\n\nstd::size_t type" << '\n';
	std::cout << sizeof(std::size_t) << '\n';

	return 0;
}