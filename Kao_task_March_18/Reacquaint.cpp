#include<stdio.h>
#include<stdlib.h>

int main() {
	char s[] = "1224367";
	char* p = s;

	printf("%c", *p++);
	printf("%c", *(p++));
	printf("%c", (*p)++);
	printf("%c", *++p);
	printf("%c", *(++p));
	printf("%c", ++ * p);
	printf("%c", ++(*p));
	printf(s);

	system("PAUSE");

	return 0;
}