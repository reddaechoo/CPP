#include <iostream>
#include <iomanip>
#include <typeinfo> // for typeid()

/*
// implicit type conversion(automatic type conversion, coercion)
	    : the compiler automatically transforms one data type into another
		1) promotions
		2) conversions
*/

// explicit type conversion : the developer uses a casting operator to direct the conversion


int main()
{
	// 1. Numeric promotion : always safe
	// : Whenever a value from one fundamental data type is converted into a value of a larger fundamental data type
	//   from the same family
	/*
	long l{ 64 };		// widen the integer 64 into a long
	double d{ 0.12f };	// promote the float 0.12 into a double
	*/

	/*
	1-1. Integral promotion
	 : involoves the conversion of integer types narrower(bool, char, unsigned char, signed char, unsigned short, signed short)
	   than int to an int or an unsigned int

	1-2. Floating point promotion
	 : involves the conversion of a float to a double
	*/


	// 2. Numeric conversions : may or may not result in a loss of data
	//	: convert a value from a larger type to a similar smaller type, or between different types
	/*
	double d{ 3 };	// convert integer 3 to a double (between different types)
	short s{ 2 };	// convert integer 2 to a short (from larger to smaller type within same type family)
	*/

	// we¡¯ve assigned a large integer to a char (that has range -128 to 127)
	/*
	int i{ 30000 };
	char c = i;	// chars have range -128 to 127

	std::cout << static_cast<int>(c);
	*/


	// converting from a larger integral or floating point type to a smaller similar type will generally work
	// so long as the value fits in the range of the smaller type
	/*
	int i{ 2 };
	short s = i;	// convert from int to short
	std::cout << s << '\n';

	double d{ 0.1234 };
	float f = d;
	std::cout << f << '\n';
	*/


	// In the case of floating point values, some rounding may occur due to a loss of precision in the smaller type
	/*
	float f = 0.123456789; // double value 0.123456789 has 9 significant digits, but float can only support about 7
	std::cout << std::setprecision(9) << f << '\n';
	*/


	// Converting from an integer to a floating point number generally works as long as 
	// the value fits within the range of the floating type
	/*
	int i{ 10 };
	float f = i;
	std::cout << f;
	*/


	// Converting from an integer to a floating point number generally works as long as the value fits
	// within the range of the floating type
	/*
	int i = 3.5;
	std::cout << i << '\n';
	*/

	
	// narrowing conversions
	// Since information loss is generally undesirable, brace initialization doesn¡¯t allow narrowing conversions.
	/*
	double d{ 10.0 };
	int i{ d };	//  Error: A double can store values that don't fit into an int
	*/


	// Evaluating arithmetic expressions
	/*
	short a{ 4 };
	short b{ 5 };
	std::cout << typeid(a + b).name() << " " << a + b << '\n'; // show us the type of a+b
	// short --> int
	*/

	double d{ 4.0 };
	short s{ 2 };
	std::cout << typeid(d + s).name() << ' ' << d + s << '\n';	// show us the type of d + s
	// short --> int --> double




	return 0;
}