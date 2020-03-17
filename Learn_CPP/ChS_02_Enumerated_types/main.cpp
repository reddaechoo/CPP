#include <iostream>
#include <string>

// An enumerated type(also called an enumeration or enum) is a data type 
// where every possible value is defined as a symbolic constant(called an enumerator)

//enum Color :int; // forward declaration


//enum Color :int	// forward declaration »ç¿ë½Ã,
enum Color 
{
	COLOR_BLACK,	// assigned 0
	COLOR_RED,		// assigned 1
	COLOR_BLUE,		// assigned 2
	COLOR_GREEN,	// assigned 3
	COLOR_WHITE,	// assigned 4
	COLOR_CYAN,		// assigned 5
	COLOR_YELLOW,	// assigned 6
	COLOR_MAGENTA,	// assigned 7
};

enum Animal
{
	ANIMAL_CAT = -3,
	ANIMAL_DOG, // assigned -2
	ANIMAL_PIG, // assigned -1
	ANIMAL_HORSE = 5,
	ANIMAL_GIRAFFE = 5, // shares same value as ANIMAL_HORSE
	ANIMAL_CHICKEN // assigned 6
};


enum ItemType
{
	ITEMTYPE_SWORD,
	ITEMTYPE_TORCH,
	ITEMTYPE_POTION,
};

std::string getItemName(ItemType itemType)
{
	if (itemType == ITEMTYPE_SWORD)
		return std::string("Sword");
	if (itemType == ITEMTYPE_TORCH)
		return std::string("Torch");
	if (itemType == ITEMTYPE_POTION)
		return std::string("Potion");

	// Just in case we add a new item in the future and forget to update this function
	return std::string("???");
}

int main()
{
	/*
	Color paint(COLOR_WHITE);
	std::cout << paint;
	*/


	/*
	int mypet = ANIMAL_PIG;
	std::cout << ANIMAL_HORSE; // evaluates to integer before being pased to std:cout
	*/


	// ItemType is the enumerated type we've defined above.
	// itemType (lower case i) is the name of the variable we're defining (of type ItemType).
	// ITEMTYPE_TORCH is the enumerated value we're initializing variable itemType with.
	ItemType itemType = ITEMTYPE_TORCH;

	std::cout << "You are carrying a " << getItemName(itemType) << "\n";


	return 0;
}