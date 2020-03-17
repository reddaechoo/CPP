#include <iostream>

int main()
{
	/*
	enum Color
	{
		RED, // RED is placed in the same scope as Color
		BLUE,
	};

	enum Fruit
	{
		BANANA, // BANANA is placed in the same scope as Fruit
		APPLE,
	};

	Color color = RED; // Color and RED can be accessed in the same scope (no prefix needed)
	Fruit fruit = BANANA; // Fruit and BANANA can be accessed in the same scope (no prefix needed)

	if (color == fruit) // The compiler will compare a and b as integers
		std::cout << "color and fruit are equal\n"; // and find they are equal!
	else
		std::cout << "color and fruit are not equal\n";
	*/


	// enum class
	// makes enumerations both strongly typed and strongly scoped
	enum class Color // "enum class" defines this as a scoped enumeration instead of a standard enumeration
	{
		RED, // RED is inside te scope of Color
		BLUE
	};

	enum class Fruit
	{
		BANANA, // BANANA is inside the scope of Fruit
		APPLE,
	};

	Color color = Color::RED; // note: RED is not directly accessible any more, we have to use Color::RED
	Fruit fruit = Fruit::BANANA; // note: BANANA is not directly accessible any more, we have to use Fruit::BANANA

	/*
	if (color == fruit) // compile error here, as the compiler doesn't know how to compare different types Color and Fruit
		std::cout << "color and fruit are equal\n";
	else
		std::cout << "color and fruit are not equal\n";
	*/

	if(color==Color::RED) // this is okay
		std::cout << "The color is red!\n";
	else
		std::cout << "The color is blue!\n";


	//std::cout << color; // won't work, because there's no implicit conversion to int
	std::cout << static_cast<int>(color); // will print 1

	return 0;
}