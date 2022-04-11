// Read from file.

#include <iostream>
#include <fstream>
#include <iomanip>
#include <stdlib.h>
using namespace std;

int main() {
	int a, b, c, d, e, f, g, h, i, j, k;

	ifstream file("trace.txt");

	if (!file) {
		cout << "Cannot open file.\n";

		return 1;
	}

	// Read from file.
	file >> a;
	file >> b;
	file >> c;
	file >> d;
	file >> e;
	file >> f;
	file >> g;
	file >> h;
	file >> i;
	file >> j;
	file >> k;

	cout << a << "\n";
	cout << b << "\n" << c << "\n" << d << "\n" << e << "\n" << f << "\n" << g << "\n" << h << "\n";
	cout << i << "\n" << j << "\n" << k;

	file.close();

	return 0;

}