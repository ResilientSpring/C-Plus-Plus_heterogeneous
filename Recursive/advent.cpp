// Demonstrate recursion.

#include <iostream>
using namespace std;

int factr(int n);
int fact(int n);

int main() {

}

// Recursive version.
int factr(int n) {
	int answer;

	if (n == 1)
	{
		return
			1;
	}

	answer = factr(n - 1) * n;

	return answer;
}

// Iterative version.
int fact(int n) {
	int t, answer;

	answer = 1;

	for ( t = 0; t <= n; t++)
	{
		answer = answer * (t);
	}

	return answer;
}
