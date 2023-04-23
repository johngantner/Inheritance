#include <iostream>
#include "Vehicle.h"
using namespace std;

Vehicle::Vehicle() {
	manufacturer = "";
	yearBuilt = 0;
}

Vehicle::Vehicle(string man, int year)
{
	manufacturer = man;
	yearBuilt = year;
}

string Vehicle::getManufacturer() const
{
	return manufacturer;
}

void Vehicle::setManufacturer(string man)
{
	manufacturer = man;
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