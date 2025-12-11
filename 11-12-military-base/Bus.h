#pragma once
#include <iostream>
#include"Base.h"
#include"Vehicle.h"
using namespace std;

class Bus:public Vehicle
{
	int people;
	int maxPeople;
public:
	Bus(double petrol_amount, double tank_volume, int _people, int max_people);
	int GetPeopleCount();
	int GetMaxPeople();
	void Arrive(Base& base);
	bool Leave(Base& base);
};
