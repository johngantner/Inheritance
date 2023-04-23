#include <iostream>
#include "Truck.h"
using namespace std;

// Default constructor
Truck::Truck():Vehicle() {
	 towingCapacity = 0;
}

// Constructor 
Truck::Truck(string man, int year, int towing) :
	Vehicle(man, year)
{
	towingCapacity = towing;
}

// Getters and setters
int Truck::getTowingCapacity() const
{
	return towingCapacity;
}

void Truck::setTowingCapacity(int towing)
{
	towingCapacity = towing;
}

// Displaying the info
void Truck::displayInfo() const
{
	Vehicle::displayInfo();
	cout << "Towing capacity: " << towingCapacity << endl;
}