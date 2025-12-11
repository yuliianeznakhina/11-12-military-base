#pragma once
#include <iostream>
#include"Base.h"
using namespace std;

class Vehicle
{
protected:
	double petrolAmount;
	double tankVolume;
public:
	Vehicle(double petrol_amount, double tank_volume);
	double GetTankVolume() const;
	double GetPetrolAmount() const;
	virtual void Arrive(Base& base);
	virtual bool Leave(Base& base);
};