#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
	int a, b, c;

	ifstream in("trace.txt");  // Open a file for text input.

	if (!in) {
		cout << "Cannot open file.\n";

		return 1;
	}

	in >> hex >> a;
	in >> hex >> b;
	in >> hex >> c;

//	cout << dec << a << "\n";
//	cout << dec << b << "\n";
//	cout << dec << c << "\n";


	in.close();

	cout << a << "\n";
	cout << b << "\n";
	cout << c << "\n";

	return 0;
}