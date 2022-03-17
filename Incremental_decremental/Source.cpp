#include <stdio.h>
using namespace std;

int main() {
	int i = 3, j = 4, k = 5;

	printf("%d", i++ + j++ + --k);

	return 0;
}
