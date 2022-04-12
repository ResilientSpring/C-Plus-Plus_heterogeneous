// Allocate an array.

#include <iostream>
#include <new>
using namespace std;

int main() {
	int* p, i;

	try
	{
		p = new int[]; // Dynamic arrays may not be given initial values.
	}
	catch (bad_alloc xa)
	{
		cout << "Allocation Failure\n";

		return 1;
	}

	for (i = 0; i < 10; i++)
	{
		p[i] = i;
	}

	for (i = 0; i < 10; i++)
	{
		cout << p[i] << " ";
	}

	delete[] p; // release the array.

	return 0;
}