#pragma once
#include <iostream>
#include"Base.h"
#include"Vehicle.h"
using namespace std;

class Truck :public Vehicle
{
	double load;
	double maxLoad;
public:
	Truck(double petrol_amount, double tank_volume, double _load, double max_load);
	double GetCurrentLoad();
	double GetMaxLoad();
	void Arrive(Base& base);
	bool Leave(Base& base);
};
