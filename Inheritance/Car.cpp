#include <iostream>
#include "Car.h"
using namespace std;

Car::Car():Vehicle()
{
	numOfDoors = 0;
}

Car::Car(string manu, int year, int doors) :
	Vehicle(manu, year)
{
	numOfDoors = doors;
}

int Car::getNumOfDoors() const
{
	return numOfDoors;
}

void Car::setNumOfDoors(int doors)
{
	numOfDoors = doors;
}

void Car::displayInfo() const
{
	Vehicle::displayInfo();
	cout << "Number of Doors: " << numOfDoors << endl;
}