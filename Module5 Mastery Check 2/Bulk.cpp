#include <iostream>
#include <string>
#include <cmath>
using namespace std;

double hypotenuse(double opposing_side1, double opposing_side2);

int main() {

	double side1;
	double side2;

	cout << "Please enter a right triangle's first opposing side.";

	cin >> side1;

	cout << "Please enter a right triangle's second opposing side.";

	cin >> side2;

	double the_hypotenuse = hypotenuse(side1, side2);

	cout << "The hypotenuse of the right triangle given the lengths of the two opposing sides " 
		+ to_string(side1) + " and " + to_string(side2) + " is " + to_string(the_hypotenuse); // [1]

	return 0;

}

double hypotenuse(double opposing_side1, double opposing_side2) {
	return sqrt((pow(opposing_side1, 2) + pow(opposing_side2, 2)));  // [2]
}

// Reference: 
// 1. How to concatenate a string and an int
// https://stackoverflow.com/a/900035

// 2. C++ pow()
// https://www.programiz.com/cpp-programming/library-function/cmath/pow
