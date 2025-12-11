#include "Vehicle.h"

Vehicle::Vehicle(double petrol_amount, double tank_volume)
{
	petrolAmount = petrol_amount; tankVolume = tank_volume;
}

double Vehicle::GetTankVolume() const
{
	return tankVolume;
}

double Vehicle::GetPetrolAmount() const
{
	return petrolAmount;
}

void Vehicle::Arrive(Base& base)
{
	base.SetVehiclesOnBase(base.GetVehiclesOnBase() + 1);
	base.SetPeopleOnBase(base.GetPeopleOnBase() + 1);
}

bool Vehicle::Leave(Base& base)
{
	if (base.GetPeopleOnBase() > 0 && base.GetVehiclesOnBase() > 0 && base.GetPetrolOnBase() >= tankVolume - petrolAmount)
	{
		base.SetPetrolOnBase(base.GetPetrolOnBase() - tankVolume + petrolAmount);
		petrolAmount = tankVolume;
		base.SetVehiclesOnBase(base.GetVehiclesOnBase() - 1);
		base.SetPeopleOnBase(base.GetPeopleOnBase() - 1);
		return true;
	}
	return false;
}