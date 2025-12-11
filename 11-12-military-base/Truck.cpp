#include "Truck.h"

Truck::Truck(double petrol_amount, double tank_volume, double _load, double max_load):Vehicle(petrol_amount, tank_volume)
{
	load = _load;
	maxLoad = max_load;
}

double Truck::GetCurrentLoad()
{
	return load;
}

double Truck::GetMaxLoad()
{
	return maxLoad;
}

void Truck::Arrive(Base& base)
{
	base.SetVehiclesOnBase(base.GetVehiclesOnBase() + 1);
	base.SetPeopleOnBase(base.GetPeopleOnBase() + 1);
	base.SetGoodsOnBase(base.GetGoodsOnBase() + load);
	load = 0;
}

bool Truck::Leave(Base& base)
{
	if (base.GetPeopleOnBase() > 0 && base.GetVehiclesOnBase() > 0 && base.GetPetrolOnBase() >= tankVolume - petrolAmount)
	{
		base.SetPetrolOnBase(base.GetPetrolOnBase() - tankVolume + petrolAmount);
		petrolAmount = tankVolume;
		base.SetVehiclesOnBase(base.GetVehiclesOnBase() - 1);
		base.SetPeopleOnBase(base.GetPeopleOnBase() - 1);
		if (base.GetGoodsOnBase() >= maxLoad)
		{
			base.SetGoodsOnBase(base.GetGoodsOnBase() - maxLoad);
			load = maxLoad;
			return true;
		}
		load = base.GetGoodsOnBase();
		base.SetGoodsOnBase(0);
		return true;
	}
	return false;
}