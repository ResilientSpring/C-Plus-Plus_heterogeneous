#include <iostream>
using std::cout;
using std::endl;

int Q(int K) {
	static int conut = 2;
	int SUM = conut;
	conut += K;

	return SUM;
}

int P(int K) {
	int conut = 2;
	int SUM = conut;
	conut += K;

	return SUM;
}

int main() {
	for (int i = 1; i <= 8; i <<= 1)
	{
		cout << Q(i);
	}

	for (int i = 1; i <= 8; i <<= 1)
	{
		cout << P(i);
	}

	system("pause");
	return 0;
}