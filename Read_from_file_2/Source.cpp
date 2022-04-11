// Read from file.

#include <iostream>
#include <fstream>
using namespace std;

int main() {
	char ch;
	int i;
	float f;
	char str[80];

	ifstream in("test.txt"); // open a file for text input.
	
	if (!in) {
		cout << "Cannot open file.";
	}

	// Read from the file.
	in >> i;
	in >> f;
	in >> ch;
	in >> str;

	cout << i << " " << f << " " << ch << "\n";
	cout << str;

	in.close();

	return 0;
}