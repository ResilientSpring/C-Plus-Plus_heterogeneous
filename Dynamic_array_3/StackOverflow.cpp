#include <iostream>
#include <new>
using namespace std;

int main() {
	int size;

	cout << "Input the array size:\n";

	cin >> size;

	int* array = new int[size];

	for (int i = 0; i < size; i++)
	{
		array[i] = i;
	}

	for (int i = 0; i < size; i++)
	{
		cout << array[i] << "\n";
	}

	delete[] array;

	return 0;
}

// Reference:
// 1. https://stackoverflow.com/a/4029897/