#pragma once
#include <iostream>
using namespace std;

class Base
{
	static int peopleOnBase;
	static int vehiclesOnBase;
	static double petrolOnBase;
	static double goodsOnBase;
public:
	static int GetPeopleOnBase();
	static void SetPeopleOnBase(int p);

	static int GetVehiclesOnBase();
	static void SetVehiclesOnBase(int p);

	static double GetPetrolOnBase();
	static void SetPetrolOnBase(double p);
	
	static double GetGoodsOnBase();
	static void SetGoodsOnBase(double p);
};