// Read from trace.txt

#include <iostream>
#include <fstream>
using namespace std;

int main() {
	float a, b;

	ifstream in("trace.txt", ios::dec);

	if (!in) {
		cout << "Cannot open file.\n";

		return 1;
	}
	
	in >> a;
	in >> b;

	cout << a << "\n" << b;

	in.close();

	return 0;

}