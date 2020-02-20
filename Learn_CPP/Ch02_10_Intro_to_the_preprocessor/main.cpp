// When the preprocessor runs, it scans through the code file (from top to bottom), looking for preprocessor directives
// All text changes made by the preprocessor happen temporarily in-memory each time the code file is compiled

#include <iostream> //the preprocessor will replace it with the preprocessed contents of the file named ¡°iostream¡±.

// Directives defined in one code file do not have impact on other code files in the same project.

// Object-like macros with substitution text
#define MY_NAME "Alex" 

// Object-like macros without substitution text
#define  PRINT_JOE

int main()
{
	// recommend avoiding these kinds of macros altogether, as there are better ways to do this kind of thing.
	std::cout << "My name is: " << MY_NAME << '\n';


// conditional compilation
// #ifdef preprocessor directive to check whether an identifier has been previously #defined
#ifdef PRINT_JOE
	std::cout << "Joe\n"; // if PRINT_JOE is defined, compile this code
#endif

#ifdef PRINT_BOB
	std::cout << "Bob\n"; // if PRINT_BOB is defined, compile this code
#endif


// #ifndef preprocessor directive to check whether an identifier has not been previously #defined
#ifndef PRINT_BOB
	std::cout << "Bob\n"; // if PRINT_BOB is not defined, compile this code
#endif


// #if 0 to exclude a block of code from being compiled
#if 0 // Don't compile anything starting here
	std::cout << "Bob\n";
	std::cout << "Steve\n";
#endif // until this point


	return 0;
}


