#include <iostream>


int main()
{
	// Using declarations
	using std::cout; // this using declaration tells the compiler that cout should resolve to std::cout
	cout << "Hello world!"; // so no std:: prefix is needed here!


	// The using directive
	using namespace std; // this using directive tells the compiler that we're using everything in the std namespace!
	cout << "Hello world!";	// so no std:: prefix is needed here!


	return 0;
} // the using declaration expires here