#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"
#include <string>
using namespace std;

class Car : public Vehicle
{
	// Memeber variables
private:
	int numOfDoors;
public:
	Car();
	Car(string, int, int);
	int getNumOfDoors() const;
	void setNumOfDoors(int);
	void displayInfo() const;
};
#endif
