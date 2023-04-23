#include <iostream>
#include "Vehicle.h"
using namespace std;

// Default constructor
Vehicle::Vehicle() {
	manufacturer = "";
	yearBuilt = 0;
}

// Constructor
Vehicle::Vehicle(string man, int year)
{
	manufacturer = man;
	yearBuilt = year;
}

// Getters and setters
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

// Displaying the info
void Vehicle::displayInfo() const
{
	cout << "Manufacturer: " << manufacturer << endl
		<< "Year Built: " << yearBuilt << endl;
}