#include "Base.h"

int Base::GetPeopleOnBase()
{
	return peopleOnBase;
}

void Base::SetPeopleOnBase(int p)
{
	peopleOnBase = p;
}

int Base::GetVehiclesOnBase()
{
	return vehiclesOnBase;
}

void Base::SetVehiclesOnBase(int p)
{
	vehiclesOnBase = p;
}

double Base::GetPetrolOnBase()
{
	return petrolOnBase;
}

void Base::SetPetrolOnBase(double p)
{
	petrolOnBase = p;
}

double Base::GetGoodsOnBase()
{
	return goodsOnBase;
}

void Base::SetGoodsOnBase(double p)
{
	goodsOnBase = p;
}

int Base::peopleOnBase = 5000;
int Base::vehiclesOnBase = 300;
double Base::petrolOnBase = 500000;
double Base::goodsOnBase = 1000;