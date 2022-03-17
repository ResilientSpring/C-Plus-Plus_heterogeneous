#include <stdio.h>
using namespace std;

int main() {
	int n = 0, A[10] = { 8, 7, 6, 4, 3, 1, 2, 5, 9, 10 };

	for (int i = 0; i < 6; i++)
	{
		int sum = A[i];

		for (int j = 0; j < 5; j++)
		{
			sum = sum + n * j;
		}

		n = sum;
	}

	printf("%d\n", n);

	return 0;
}