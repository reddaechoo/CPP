#include <iostream>

/*
	Run to cursor
	: 'Run to cursor' command executes the program until execution reaches the statement selected by your cursor

	Continue
	: 'Continue' debug command simply continues running the program as per normal,either until the program terminates,
	   or until something triggers control to return back to you again

	Start
	: 'Start' command performs the same action as continue, just starting from the beginning of the program.
	   It can only be invoked when not already in a debug session.

	Breakpoints
	: 'Breakpoint' is a special marker that tells the debugger to stop execution of the program at the breakpoint
	   when running in debug mode.

*/

void printValue(int value)
{
	std::cout << value;
}

int main()
{
	printValue(5);
	printValue(6);
	printValue(7);

	return 0;
}