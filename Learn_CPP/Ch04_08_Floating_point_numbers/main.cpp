#include <iostream>
#include <iomanip> // for std::setprecision()

int main()
{
	/*
	int x{ 5 };			// 5 means integer
	double y{ 5.0 };	// 5.0 is a floating point literal (no suffix means double type by default)
	float z{ 5.0f };	// 5.0 is a floating point literal, f suffix means float type
	*/

	// sizeof
	std::cout << "size of float:\t\t" << sizeof(float) << '\n';
	std::cout << "size of double:\t\t" << sizeof(double) << '\n';
	std::cout << "size of long double:\t" << sizeof(long double) << "\n\n";


	// Printing floating point numbers
	std::cout << 5.0 << '\n'; // std::cout will not print the fractional part of a number if the fractional part is 0.
	std::cout << 6.7f << '\n';
	std::cout << 9876543.21 << '\n';


	// Floating point precision
	// std::cout has a default precision of 6 and hence it will truncate anything after that
	std::cout << "\n\n";
	std::cout << 9.87654321f << '\n';
	std::cout << 987.654321f << '\n';
	std::cout << 987654.321f << '\n';
	std::cout << 9876543.21f << '\n';
	std::cout << 0.0000987654321f << '\n';


	// std::setprecision()
	std::cout << "\n\n";
	std::cout << std::setprecision(16);		// show 16digits of precision
	std::cout << 3.33333333333333333333333333333333333333f << '\n';	// f suffix means float
	std::cout << 3.33333333333333333333333333333333333333 << '\n';  // no suffix means double


	// Precision issues don¡¯t just impact fractional numbers, they impact any number with too many significant digits
	float f{ 123456789.0f };  // f has 10 significant digits
	std::cout << "\n\n";
	std::cout << std::setprecision(9); // to show 9 digits in f
	std::cout << f << '\n';


	// Rounding errors make floating point comparisons tricky
	std::cout << "\n\n";
	double d{ 0.1 };
	std::cout << d << '\n'; // use default cout precision of 6
	std::cout << std::setprecision(17);
	std::cout << d << '\n';


	// Rounding errors can have unexpected consequences
	std::cout << "\n\n";
	std::cout << std::setprecision(17);

	double d1(1.0);
	std::cout << d1 << std::endl;

	double d2(0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1); // should equal 1.0
	std::cout << d2 << std::endl;


	// NaN and Inf
	std::cout << "\n\n";
	double zero{ 0.0 };
	double posinf{ 5.0 / zero }; // positive infinity
	std::cout << posinf << std::endl;

	double neginf{ -5.0 / zero }; // negative infinity
	std::cout << neginf << std::endl;

	double nan{ zero / zero }; // not a number(mathematically invalid)
	std::cout << nan << std::endl;

	return 0;
}