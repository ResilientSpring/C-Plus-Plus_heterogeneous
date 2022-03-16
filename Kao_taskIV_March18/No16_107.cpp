#define M1(a, b) a * (b)
#define M2(a, b) (a) + b
#include <Stdio.h>

void main(void) {
	int n1, n2;
	n1 = 2;
	n2 = 3;
	n1 = M1(n1 - n2, n2 - n1) * M2(n1 + n2, 2 * n2);

	printf("%d\n", n1);
}