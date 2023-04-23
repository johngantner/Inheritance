#ifndef TRUCK_H
#define TRUCK_H
#include "Vehicle.h"
#include <string>
using namespace std;

class Truck : public Vehicle
{
	// Memeber variables
private:
	int towingCapacity;
public: 
	Truck();
	Truck(string, int, int);
	int getTowingCapacity() const;
	void setTowingCapacity(int);
	void displayInfo() const;
};
#endif

