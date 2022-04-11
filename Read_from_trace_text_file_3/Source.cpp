#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
	int a, b;

	ifstream in("trace.txt");  // Open a file for text input.

	if (!in) {
		cout << "Cannot open file.\n";

		return 1;
	}

	in >> hex >> a;
	in >> hex >> b;

	cout << hex << a << "\n" << hex << b;

	in.close();

	return 0;
}