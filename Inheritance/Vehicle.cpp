#include <iostream>
#include "Vehicle.h"
using namespace std;

Vehicle::Vehicle() {
	manufacturer = "";
	yearBuilt = 0;
}

Vehicle::Vehicle(string manu, int year)
{
	manufacturer = manu;
	yearBuilt = year;
}

string Vehicle::getManufacturer() const
{
	return manufacturer;
}

void Vehicle::setManufacturer(string manu)
{
	manufacturer = manu;
}

int Vehicle::getYearBuilt() const
{
	return yearBuilt;
} 

void Vehicle::setYearBuilt(int year)
{
	yearBuilt = year;
}

void Vehicle::displayInfo() const
{
	cout << "Manufacturer: " << manufacturer << endl
		<< "Year Built: " << yearBuilt << endl;
}