#include <iostream>
#include <cstring>
#include <string>
using namespace std;

void quick_sort(char* array_name, int len);
void qs(char* array_name, int left, int right);

// The version we develop sorts a character array, but the logic can be adapted to sort any type of object.
int main() {

	string str = "jfmckldoelazlkper";
	cout << "Original order: " << str << "\n";

	quick_sort(str, str.length()); // [1]

	cout << "Sorted order: " << str << "\n";

	return 0;

}

// Provide a convenient interface for the user and sets up a call to the actual sorting function called qs().
void quick_sort(string array_name, int len) {

	qs(array_name, 0, len - 1);
}

// A recursive version of Quicksort for sorting characters.
void qs(string array_name, int left, int right) {
	int i = left;
	int j = right;
	char x = array_name[(left + right) / 2];
	char y;

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
* 1. 
* https://www.w3schools.com/cpp/cpp_strings_length.asp

*/