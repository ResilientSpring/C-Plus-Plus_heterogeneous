// Print a string backwards using recursion.

#include <iostream>
#include <string>
using namespace std;

void reverse(string s);

int main() {
	string str = "this is a test";

	reverse(str);

	return 0;
}

// Print string backwards.
void reverse(string s) {
	if (s[0] != 0)
	{
		for (int i = s.length() - 1; i > -1; i--)
		{
			cout << s[i];
		}
	}
}