#include <iostream>
#include "Car.h"
using namespace std;

// Default constructor
Car::Car():Vehicle()
{
	numOfDoors = 0;
}

// Constructor
Car::Car(string man, int year, int doors) :
	Vehicle(man, year)
{
	numOfDoors = doors;
}

// Getters and setters
int Car::getNumOfDoors() const
{
	return numOfDoors;
}

void Car::setNumOfDoors(int doors)
{
	numOfDoors = doors;
}

// Displaying the info
void Car::displayInfo() const
{
	Vehicle::displayInfo();
	cout << "Number of Doors: " << numOfDoors << endl;
}