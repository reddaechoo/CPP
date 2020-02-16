#include <iostream> // for std::cout

// cout: character output
// endl: end line
// cin: character input

int main()
{
	// cout & endl
	std::cout << "Hello world!" << std::endl; // print Hello world! to console

	std::cout << 4 << std::endl; // print 4 to console

	int x{ 5 }; // define integer variable x, initialized with value 5
	std::cout << x << std::endl; // print value of x (5) to console

	std::cout << "Hello" << "World" << std::endl;

	std::cout << "x is equal to: " << x << std::endl;

	std::cout << "Hi!" << std::endl;
	std::cout << "My name is Alex." << std::endl;


	// '\n' : preferred than endl
	std::cout << "x is equal to: " << x << '\n';  // Using '\n' standalone
	std::cout << "And that's all, folks!\n"; // Using '\n' embedded into a double-quoted piece of text (note: no single quotes when used this way)


	// cin
	std::cout << "Enter a number: ";	// ask user for a number
	int y{ };							// define variable x to hold user input (and zero-initialize it)
	std::cin >> y;						// get number from keyboard and store it in variable x
	std::cout << "You entered " << y << '\n';

	return 0;
}