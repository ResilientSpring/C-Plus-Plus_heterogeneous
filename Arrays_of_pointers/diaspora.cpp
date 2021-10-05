#include <iostream>
using namespace std;

int main() {
	// In a declaration statement, preceding a variable name with a * causes that variable to be a pointer.
	int* pi[10];

	// ----- End of declaration statements.

	int element = 520;

	pi[0] = &element;

	//  * is an operator representing the value at the memory address of its operand. 
	cout << *pi[0];


	// --------------------

	int coincide[5] = { 123, 456, 789, 101112, 131415 };

	cout << "\n" << coincide[0];

	return 0;
}