#include <iostream>
#include "circle.h" // for basicMath::pi
#include "growth.h" // for basicMath::e
#include "add.h"	// for basicMath::add()

// Scope Resolution Operator
/*
namespace foo	// define a namespace named foo
{
	// This doSomething() belongs to namespace foo
	int doSomething(int x, int y)
	{
		return x + y;
	}
}

namespace goo // define a namespace named goo
{
	// This doSomething() belongs to namespace goo
	int doSomething(int x, int y)
	{
		return x - y;
	}
}
*/


// Scope resolution with no prefix
/*
void print() // this print lives in the global namespace
{
	std::cout << " there\n";
}

namespace foo
{
	void print() // this print lives in the foo namespace
	{
		std::cout << "Hello";
	}
}
*/


// Nested namespaces, Namespace aliases
namespace foo
{
	namespace goo	// goo is a namespace inside the foo namespace
	{
		int add(int x, int y)
		{
			return x + y;
		}
	}
}

int main()
{
	// Scope Resolution Operator
	/*
	std::cout << foo::doSomething(4, 3) << '\n'; // use the doSomething() that exists in namespace foo
	std::cout << goo::doSomething(4, 3) << '\n'; // use the doSomething() that exists in namespace goo
	*/


	// Scope resolution with no prefix
	/*
	foo::print();	// call foo::print()
	::print();		// call print() in global namespace
	*/


	// Multiple namespace blocks allowed
	/*
	std::cout << basicMath::pi << '\n';
	std::cout << basicMath::e << '\n';
	std::cout << basicMath::add(4, 3) << '\n';
	*/


	// Nested namespaces
	//std::cout << foo::goo::add(4,3) << '\n';
	namespace boo = foo::goo;	// boo now refers to foo::goo

	std::cout << boo::add(4, 3) << '\n';	// This is really foo::goo::add()

	return 0;
} // The boo alias ends here