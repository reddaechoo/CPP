#include <iostream>

// Unnamed(anonymous) namespaces
// : a namespace that is defined without a name
//  all identifiers inside an unnamed namespace are treated as if they had internal linkage,
//  which means that the content of an unnamed namespace can¡¯t be seen outside of the file
//  in which the unnamed namespace is defined.
/*
namespace // unnamed namespace
{
	void doSomething() // can only be accessed in this file
	{
		std::cout << "v1\n";
	}
}


// Identical to Unnamed namespaces
static void doSomething() // can only be accessed in this file
{
	std::cout << "v1\n";
}
*/


// inline namespace
// anything declared inside an inline namespace is considered part of the parent namespace.
inline namespace v1 // declare an inline namespace named v1
{
	void doSomething()
	{
		std::cout << "v1\n";
	}
}

namespace v2 // declare a normal namespace named v2
{
	void doSomething()
	{
		std::cout << "v2\n";
	}
}


int main()
{
	// Unnamed namespaces
	/*
	doSomething(); // we can call doSomething() without a namespace prefix
	*/


	// inline namespace
	v1::doSomething();	// calls the v1 version of doSomething();
	v2::doSomething();	// calls the v2 version of doSomething();

	doSomething();		// calls the inline version of doSomething() (which is v1)

	
	return 0;
}