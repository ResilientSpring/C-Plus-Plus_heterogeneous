// Return a pointer. 

#include <iostream>
#include <string>
using namespace std;

char* get_substr(char* sub, char* str);

int main() {

}

// Return pointer to substring or null if not found.
char* get_substr(char* sub, char* str) {

	int t; 
	char* p, * p2, * start;

	for ( t = 00; str[t]; t++)
	{
		p = &str[t]; // reset pointors.
		start = p;
		p2 = sub;

		while (*p && *p2 == *p)  // Check for substring.
		{

		}
	}


}