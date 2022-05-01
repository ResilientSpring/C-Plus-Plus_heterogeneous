// A program that uses the Vehicle class.

#include <iostream>
using namespace std;

// Declare the Vehicle class.
class Vehicle {
public:
	int passengers;
	int fuelcap;
	int mpg;
};

int main() {
	Vehicle minivan;  // Create an instance of Vehicle called minivan.
	int range;

	// Assign values to fields in minivan.
	minivan.passengers = 7;
	minivan.fuelcap = 16;
	minivan.mpg = 21;

	// Compute the range assuming a full tank of gas.
	range = minivan.fuelcap * minivan.mpg;

	cout << "Minivan can carry " << minivan.passengers << " with a range of " << range << "\n";

	return 0;
}