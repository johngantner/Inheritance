// John Gantner
// C++ Software Development 
// 4/18/2023

#include <iostream>
#include <string>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
using namespace std;

int main()
{
	// Variables
	string vehicleManu, carManu, truckManu = "";
	int vehicleYear, carYear, truckYear, carDoors, towingCapacity = 0;

	cout << "Vehicle Program" << endl << endl;

	// Getting and displaying vehicle information
	cout << "Vehicle: " << endl;
	cout << "Enter the manufacturer: ";
	cin >> vehicleManu;
	cout << "Enter the year built: ";
	cin >> vehicleYear;
	cout << "Vehicle Information: " << endl;
	Vehicle v(vehicleManu, vehicleYear);
	v.displayInfo();

	// Getting and displaying the car information
	cout << endl << "Car: " << endl;
	cout << "Enter the manufacturer: ";
	cin >> carManu;
	cout << "Enter the year built: ";
	cin >> carYear;
	cout << "Enter the number of doors: ";
	cin >> carDoors;
	cout << "Vehicle Information: " << endl;
	Car c(carManu, carYear, carDoors);
	c.displayInfo();

	// Getting and displaying the truck information
	cout << endl << "Truck: " << endl;
	cout << "Enter the manufacturer: ";
	cin >> truckManu;
	cout << "Enter the year built: ";
	cin >> truckYear;
	cout << "Enter the towing capacity: ";
	cin >> towingCapacity;
	cout << "Vehicle Information: " << endl;
	Truck t(truckManu, truckYear, towingCapacity);
	t.displayInfo();
}