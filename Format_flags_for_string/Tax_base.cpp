#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {

	string hex = "0x0A985540";
	int converted = atoi(hex.c_str());


	cout.setf(ios::dec);

	cout << converted;

	return 0;
}