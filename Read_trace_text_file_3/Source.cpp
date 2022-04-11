// Read from trace.txt

#include <iostream>
#include <fstream>
using namespace std;

int main() {
	int a, b;

	//	ifstream in("trace.txt", ios::dec);

	ifstream in("trace.txt");

	if (!in) {
		cout << "Cannot open file.\n";

		return 1;
	}

	//	in.setf(ios::hex);

	in >> a;
	in >> b;

	cout << a << "\n" << b;

	in.close();

	return 0;

}