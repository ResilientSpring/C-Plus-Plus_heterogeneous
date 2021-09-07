/*
* This program displays the sum of the two numeric command-line arguments.
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]) {
	double a, b;

	if (argc != 3)
	{
		cout << "Usage: add num num\n";
		return 1;
	}

	a = atof(argv[1]); // convert first command-line arg
	b = atof(argv[2]); // convert second command-line arg

	cout << a + b;

	return 0;
}