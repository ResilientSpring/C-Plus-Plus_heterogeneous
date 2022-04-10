// Use setf()
#include <iostream>
using namespace std;

int main() {
	// Turn on showbase flag.
	cout.setf(ios::dec | ios::showbase);
	cout << 0x0A985540;

	return 0;
}