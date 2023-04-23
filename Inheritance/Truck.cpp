#include <iostream>
#include "Truck.h"
using namespace std;

Truck::Truck():Vehicle() {
	 towingCapacity = 0;
}

Truck::Truck(string man, int year, int towing) :
	Vehicle(man, year)
{
	towingCapacity = towing;
}

int Truck::getTowingCapacity() const
{
	return towingCapacity;
}

void Truck::setTowingCapacity(int towing)
{
	towingCapacity = towing;
}

void Truck::displayInfo() const
{
	Vehicle::displayInfo();
	cout << "Towing capacity: " << towingCapacity << endl;
}