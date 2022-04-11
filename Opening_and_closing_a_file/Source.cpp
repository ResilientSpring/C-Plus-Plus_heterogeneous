#include <iostream>
#include <fstream>
using namespace std;

int main() {
	fstream both;

	both.open("trace.txt", ios::in | ios::dec);

	if (!both.is_open())
		cout << "Cannot open file. \n";

}