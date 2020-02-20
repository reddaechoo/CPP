#include <iostream>

using namespace std; // this is a using directive telling the compiler to check the std namespace 
					 // when resolving identifiers with no prefix
					 // this is a bad practice, and highly discouraged.

int main()
{
	cout << "Hello World!"; // cout has no prefix, so the compiler will check to see 
							// if cout is defined locally or in namespace std
	return 0;
}