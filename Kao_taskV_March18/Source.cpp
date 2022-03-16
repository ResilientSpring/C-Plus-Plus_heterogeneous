#include <string.h>
#include <stdio.h>

void fun1(char* a) {
	int i, j;
	char c;

	for ( i = 1, j = strlen(a) - 1; i <= j; i = i + 1, j = j -1)
	{
		c = a[i];
		a[i] = a[j];
		a[j] = c;
	}
}

int main(void) {
	char s1[] = "ABCDE";
	fun1(s1);
	printf("%s", s1);
	return 0;
}