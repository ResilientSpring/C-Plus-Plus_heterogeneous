// Display command-line arguments

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	for (int i = 0; i < argc; i++)
	{
		cout << argv[i] << "\n";
	}

	return 0;
}