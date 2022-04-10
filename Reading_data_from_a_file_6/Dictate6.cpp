#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdlib.h>
#include <cstdlib>
using namespace std;

int main() {
	int num;
	FILE* inputFile; // Read as "file pointer in"

	inputFile = fopen("C:\\Users\\ted10014\\SkyDrive\\VisualStudio\\testcase\\trace.txt", "r");  // Open the file for "reading".

	fscanf(inputFile, "%d", &num);

	printf("%d", num);

	fclose(inputFile);

	return 0;
}