#include <iostream>
using namespace std;

class Father {
public:
	Father() {
		cout << "a" << endl;
	}

	~Father() {
		cout << "b" << endl;
	}
};

class Son :public Father {
public:
	Son() {
		cout << "c" << endl;
	}

	~Son() {
		cout << "d" << endl;
	}
};

int main() {
	Son son;
	system("pause");

	return 0;
}