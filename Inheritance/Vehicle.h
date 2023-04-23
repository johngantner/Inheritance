#ifndef VEHICLE_H
#define VEHICLE_H
#include <string>
using namespace std;

class Vehicle
{
private:
	string manufacturer;
	int yearBuilt;

public:
	Vehicle();
	Vehicle(string, int);
	string getManufacturer() const;
	void setManufacturer(string);
	int getYearBuilt() const;
	void setYearBuilt(int);
	void displayInfo() const;
};
#endif