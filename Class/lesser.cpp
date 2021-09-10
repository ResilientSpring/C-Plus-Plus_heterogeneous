#include <iostream>
#include <string>
using namespace std;

class Vehicle {
public:
	int passenger; // number of passengers.
	int fuelcap; // fuel capacity in gallons .
	int mpg; // fuel consumption in miles per gallon.
};

int main() {
	Vehicle minivan;  // Create a Vehicle object called minivan.
	int range;

	minivan.fuelcap = 16;
	minivan.passenger = 7;
	minivan.mpg = 21;

	// Compute the range assuming a full tank of gas.
	range = minivan.fuelcap * minivan.mpg;

	cout << "Minivan can carry " << minivan.passenger << " with a range of " << range << "\n";

	return 0;
}