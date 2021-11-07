#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main() {

	// How to define a C-string?
	char str[] = "C++";
	// In the above code, str is a string and it holds 4 characters.
	// Although, "C++" has 3 character, the null character \0 is added to the end of the string automatically.

	// Alternative ways of defining a string
	char str2[4] = "C++";
	char str3[] = { 'C', '+', '+', '\0' };
	char str4[4] = { 'C', '+', '+', '\0' };

	// Like arrays, it is not necessary to use all the space allocated for the string.
	char str5[100] = "C++";

	// Display the user input stored in the character array.
	cout << "Enter a string: ";
	cin >> str;
	cout << "You entered: " << str;

	cout << "\n" << str2 << "\n" << str3 << "\n" << str4 << "\n" << str5;

	string str6 = "self-opinionated";
	string str7[] = { "decompose", "foresee", "forego", "in lieu of" };

	cout << "\n" << str6 << "\n" << str7[0] << "\n" << str7[1] << "\n" << str7[2] << "\n" << str7[3] << "\n" << str7;

	return 0;

}

// Reference: https://web.archive.org/web/20210909032723/https://www.programiz.com/cpp-programming/strings