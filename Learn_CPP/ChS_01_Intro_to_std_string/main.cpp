#include <string>
#include <iostream>

int main()
{
	/*
	std::string myName{ "Alex" };
	std::cout << "My name is: " << myName << '\n';
	*/


	// operator>> only returns characters up to the first whitespace it encounters.
	// Any other characters are left inside cin, waiting for the next extraction.
	/*
	std::cout << "Enter your full name: ";
	std::string name;
	std::cin >> name;	// this won't work as expected since std::cin breaks on whitespace

	std::cout << "Enter your age: ";
	std::string age;
	std::cin >> age;

	std::cout << "Your name is " << name << " and your age is " << age << '\n';
	*/


	// Use std::getline() to input text
	// To read a full line of input into a string, you¡¯re better off using the std::getline() function instead.
	// std::getline() takes two parameters: the first is std::cin, and the second is your string variable.
	/*
	std::cout << "Enter your full name: ";
	std::string name{};
	std::getline(std::cin, name);	// read a full line of text into name

	std::cout << "Enter your age: ";
	std::string age{};
	std::getline(std::cin, age);	// read a full line of text into age

	std::cout << "Your name is " << name << " and your age is " << age << '\n';
	*/


	// Mixing std::cin and std::getline()
	// when you enter a value using cin, cin not only captures the value, it also captures the newline.
	/*
	std::cout << "Pick 1 or 2: ";
	int choice{};
	std::cin >> choice;

	std::cout << "Now enter your name: ";
	std::string name{};
	std::getline(std::cin, name);

	std::cout << "Hello, " << name << ", you picked " << choice << '\n';
	*/

	/*
	std::cout << "Pick 1 or 2: ";
	int choice{};
	std::cin >> choice;

	std::cin.ignore(32767, '\n'); // ignore up to 32767 characters until a \n is removed
	// it¡¯s the largest signed value guaranteed to fit in a (2-byte) integer on all platforms

	std::cout << "Now enter your name: ";
	std::string name{};
	std::getline(std::cin, name);

	std::cout << "Hello, " << name << ", you picked " << choice << '\n';
	*/


	// Appending strings
	/*
	std::string a{ "45" };
	std::string b{ "11" };

	std::cout << a + b << '\n'; // a and b will be concatenated
	a += " volts";
	std::cout << a;
	*/


	// String length
	std::string myName{ "Alex" };
	std::cout << myName << " has " << myName.length() << " characters\n";

	return 0;
}