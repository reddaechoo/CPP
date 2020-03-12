#ifndef CONSTANTS_H
#define CONSTANTS_H


// Global constants as internal variables
// define your own namespace to hold constants
/*
namespace constants
{
	// constants have internal linkage by default
	constexpr double pi{ 3.14159 };
	constexpr double avogadro{ 6.0221413e23 };
	constexpr double my_gravity{ 9.2 }; // m/s^2 -- gravity is light on this planet
	// ... other related constants
}
*/


// Global constants as external variables
/*
namespace constants
{
	// since the actual variables are inside a namespace, the forward declarationis need to be inside a namespace as well
	extern const double pi;
	extern const double avogadro;
	extern const double my_gravity;
}
*/


// Global consants as inline variables
// definie your own namespace to hold constants
namespace constants
{
	// these variables will only be instantiated once and shared across all code files.
	// If you need global constants and your compiler is C++17 capable, 
	// prefer defining inline constexpr global variables in a header file.
	inline constexpr double pi{ 3.141590 };  // note: now inline constexpr
	inline constexpr double avogadro{ 6.0221413e23 };
	inline constexpr double my_gravity{ 9.2 }; // m/s^2 -- gravity is light on this planet
}

#endif