#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, * ptr;

	int array[4][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12} };
	ptr = (int*)array;
	printf("%d\n", array[3][2]);
	printf("%d\n %d\n", (*(array + 1))[1], *((array + 1)[1]));
	system("pause");
	return 0;
}