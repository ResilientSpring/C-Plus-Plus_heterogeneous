#include <iostream>
#include <cstring>
using namespace std;

void quick_sort(char* array_name, int len);
void qs(char* array_name, int left, int right);

// The version we develop sorts a character array, but the logic can be adapted to sort any type of object.
int main() {

	char str[] = "jfmckldoelazlkpers";
	cout << "Original order: " << str << "\n";

	quick_sort(str, strlen(str));

	cout << "Sorted order: " << str << "\n";

	return 0;

}

// Provide a convenient interface for the user and sets up a call to the actual sorting function called qs().
void quick_sort(char* array_name, int len) {

	cout << "The length of string is " << len << "\n";

	// items points to the array to be sorted.[1]
	qs(array_name, 0, len - 1);
}

// A recursive version of Quicksort for sorting characters.
void qs(char* array_name, int left, int right) {
	int i = left;
	int j = right;
	char x = array_name[(left + right) / 2];
	char y;

	cout << "array_name[(left + right) / 2]" << " = " << "array_name[" << (left + right) / 2 << "]" << "\n";
	cout << "char x : " << x << "\n";

	do {
		while ((array_name[i] < x) && (i < right))
			i++;
		while ((x < array_name[j]) && (j > left))
			j--;

		if (i <= j) {
			y = array_name[i];
			array_name[i] = array_name[j];
			array_name[j] = y;

			i++;
			j--;
		}

	} while (i <= j);

	if (left < j)
		qs(array_name, left, j);

	if (i < right)
		qs(array_name, i, right);
}

/*
* References:
* 1. array name indicates the address of first element and arrays are always passed as pointers.
* https://www.geeksforgeeks.org/arrays-in-c-cpp/

*/