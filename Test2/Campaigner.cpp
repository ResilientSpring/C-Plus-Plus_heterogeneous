#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main() {
	char str[] = "an human rights campaigner.";

	cout << strlen(str) << "\n";

	cout << str[(0 + strlen(str)) / 2];





	char str2[] = "a campaigner for freedom.";

	double antagonistic = strlen(str2);

	cout << "\n" << antagonistic << "\n";

	cout << str2[(int)(antagonistic / 2)];

	cout << "\n" << str2[(int)12.5];

	cout << "\n" << str2[1 + (int)12.5];

	return 0;

}