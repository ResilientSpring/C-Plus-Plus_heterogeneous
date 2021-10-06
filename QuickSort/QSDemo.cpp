#include <iostream>
using namespace std;

int main() {

}

// Provide a convenient interface for the user and sets up a call to the actual sorting function called qs().
void quick_sort(char *items, int len) {

	// items points to the array to be sorted.[1]
	qs(items, 0, len - 1);
}

/*
* References:
* 1. array name indicates the address of first element and arrays are always passed as pointers.
* https://www.geeksforgeeks.org/arrays-in-c-cpp/

*/