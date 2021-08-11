#include <string>
#include <iostream>
using namespace std;

int main() {
	string s1;
	string s2 = s1;
	string s3 = "hiya";

	cout << "Please enter a number.\n";
	cin >> s1;
	cout << "The number you just entered: ";
	cout << s1 << endl;

	return 0;
}