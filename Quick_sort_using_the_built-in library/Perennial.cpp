#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

void quick_sort(char* array_name, int len);
int compare(const void* a, const void* b);

// The version we develop sorts a character array, but the logic can be adapted to sort any type of object.
int main() {

	char str[] = "jfmckldoelazlkper";
	cout << "Original order: " << str << "\n";

//	quick_sort(str, strlen(str));

	qsort(str, strlen(str), sizeof(char), compare);

	cout << "Sorted order: " << str << "\n";

	return 0;

}

int compare(const void* a, const void* b)
{
	const int* x = (int*)a;
	const int* y = (int*)b;

	if (*x > *y)
		return 1;
	else if (*x < *y)
		return -1;

	return 0;
}

/*
* References:
* 1. C++ qsort() - C++ Standard Library
* https://www.programiz.com/cpp-programming/library-function/cstdlib/qsort

*/