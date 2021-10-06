#include <iostream>
#include <string>
using namespace std;

int main() {
	// Declaring a string object.
	string str;

	cout << "Enter a string: ";

	getline(cin, str);

	cout << "You entered: " << str;

	return 0;
}

// Source: https://web.archive.org/web/20210909032723/https://www.programiz.com/cpp-programming/strings