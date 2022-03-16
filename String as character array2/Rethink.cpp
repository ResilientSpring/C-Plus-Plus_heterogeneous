#include <iostream>
using namespace std;

int main() {

	char str[] = "silver lining";

	cout << "Input a string: ";

	cin >> str;

	cout << "You entered: " << str;


	return 0;

}

// Reference: 
// 1. If the string you enter is longer than "silver lining", the out-of-bound exception will be thrown.
// https://stackoverflow.com/a/25516757