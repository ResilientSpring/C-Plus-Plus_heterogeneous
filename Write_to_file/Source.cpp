// Write to file.

#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ofstream out("test.txt");  // Create and open a file called "test" for text output.

	if (!out) {
		cout << "Cannot open file. \n";

		return 1;
	}

	out << 10 << "\n" << 123.23 << "\n" << "This is a short text file.";

	out.close(); // Close the file.

	return 0;
}