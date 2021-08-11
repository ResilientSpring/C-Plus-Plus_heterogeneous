#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	string str = "This Is A Test.";
	transform(str.begin(), str.end(), str.begin(), toupper);
	cout << str;
}

// Reference: https://stackoverflow.com/a/60578519/14900011