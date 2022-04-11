#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <iomanip>
using namespace std;

int main() {
	fstream both("test.txt");

	if (!both) {
		cout << "Cannot open the file.\n";
		
		return 1;
	}

	cout << dec << 0x0A985540;

	both << dec << 0x0A985540;

	return 0;
}