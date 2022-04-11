#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
	int a, b, c, d[100];

	ifstream in("trace.txt");  // Open a file for text input.

	if (!in) {
		cout << "Cannot open file.\n";

		return 1;
	}

	in >> hex >> a;
	in >> hex >> b;
	in >> hex >> c;

	for (int i = 0; i < 100; i++)
	{
		in >> hex >> d[i];
	}

	cout << dec << a << "\n";
	cout << dec << b << "\n";
	cout << dec << c << "\n";


	in.close();

	cout << a << "\n";
	cout << b << "\n";
	cout << c << "\n";

	return 0;
}