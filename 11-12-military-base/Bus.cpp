#include "Bus.h"

Bus::Bus(double petrol_amount, double tank_volume, int _people, int max_people):Vehicle(petrol_amount, tank_volume)
{
	people = _people;
	maxPeople = max_people;
}

int Bus::GetPeopleCount()
{
	return people;
}

int Bus::GetMaxPeople()
{
	return maxPeople;
}

void Bus::Arrive(Base& base)
{
	base.SetVehiclesOnBase(base.GetVehiclesOnBase() + 1);
	base.SetPeopleOnBase(base.GetPeopleOnBase() + people + 1);
}

bool Bus::Leave(Base& base)
{
	if (base.GetPeopleOnBase() > 0 && base.GetVehiclesOnBase() > 0 && base.GetPetrolOnBase() >= tankVolume - petrolAmount)
	{
		base.SetPetrolOnBase(base.GetPetrolOnBase() - tankVolume + petrolAmount);
		petrolAmount = tankVolume;
		base.SetVehiclesOnBase(base.GetVehiclesOnBase() - 1);
		if (base.GetPeopleOnBase() >= maxPeople)
		{
			people = maxPeople;
			base.SetPeopleOnBase(maxPeople);
			return true;
		}
		people = base.GetPeopleOnBase();
		base.SetPeopleOnBase(0);
		return true;
	}
	return false;
}