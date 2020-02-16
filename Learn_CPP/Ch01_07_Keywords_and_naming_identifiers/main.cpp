/*
	Identifier naming rules

	The identifier can not be a keyword.Keywords are reserved.
	The identifier can only be composed of letters(lower or upper case), numbers, and the underscore character.That means the name can not contain symbols(except the underscore) nor whitespace(spaces or tabs).
	The identifier must begin with a letter(lower or upper case) or an underscore.It can not start with a number.
	C++ is case sensitive, and thus distinguishes between lower and upper case letters.nvalue is different than nValue is different than NVALUE.
*/

#include <iostream>

int main()
{
	//First, it is a convention in C++ that variable names should begin with a lowercase letter.
	//If the variable name is one word, the whole thing should be written in lowercase letters.
	/*
	int value; // correct

	int Value; // incorrect (should start with lower case letter)
	int VALUE; // incorrect (should start with lower case letter)
	int VaLuE; // incorrect (see your psychiatrist) ;)
	*/


	//If the variable or function name is multi-word, there are two common conventions
	//: words separated by underscores, or intercapped (sometimes called camelCase,
	//since the capital letters stick up like the humps on a camel).
	/*
	int my_variable_name; // correct (separated by underscores)
	int my_function_name(); // correct (separated by underscores)
 
	int myVariableName; // correct (intercapped/CamelCase)
	int myFunctionName(); // correct (intercapped/CamelCase)
 
	int my variable name; // invalid (whitespace not allowed)
	int my function name(); // invalid (whitespace not allowed) 
 
	int MyVariableName; // valid but incorrect (should start with lower case letter)
	int MyFunctionName(); // valid but incorrect (should start with lower case letter)
	*/


	//Second, you should avoid naming your identifiers starting with an underscore, 
	//as these names are typically reserved for OS, library, and/or compiler use.


	//Third, your identifiers should make clear what the value they are holding means(particularly if the units isn¡¯t obvious)


	//a clarifying comment can go a long way
	// holds number of chars in a piece of text -- including whitespace and punctuation!
	//int numberOfChars;

	return 0;
}