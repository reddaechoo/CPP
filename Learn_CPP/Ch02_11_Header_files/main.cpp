// Header files should generally not contain function and variable definitions

#include <iostream>
#include "add.h" // Insert contents of add.h at this point. Note use of double quotes here.

// < > : angled brackets tells the preprocessor that it should look for that header file in the system directories 
// " " : double-quotes tells the preprocessor that this is a user-defined header file, so look for the header file in
//		 the current directory containing our source code first.

// Order your #includes as follow: 
// 1) your own user-defined headers first
// 2) 3rd party library headers
// 3) standard library headers, with the headers in each section sorted alphabetically.

int main()
{
	std::cout << "The sum of 3 and 4 is " << add(3, 4) << '\n';
	return 0;
}