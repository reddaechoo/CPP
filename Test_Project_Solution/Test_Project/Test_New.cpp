#include <iostream>

using namespace std;

int main()
{
	cout << "Git test" << endl;

	int sum(0);

	for (int i = 0; i < 1000; i++)
		sum += i;

	cout << "First Calculation : " << sum << endl;

	return 0;
}