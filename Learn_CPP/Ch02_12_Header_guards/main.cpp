#include "square.h"		// copies the definition for function "getSqaureSides()" into main.cpp
#include "geometry.h"   // copies contents of "square.h" into geometry.h which then gets copied into main.cpp

/*
After resolving all of the #includes

int getSquareSides()  // from square.h
{
	return 4;
}

int getSquareSides() // from geometry.h (via square.h)
{
	return 4;
}
*/

// "#pragma once" in header files
// : serves the same purpose as header guards, and has the added benefit of being shorter and less error-prone.


int main()
{
	return 0;
}