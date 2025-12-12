#include <iostream>
#include "Base.h"
#include "Vehicle.h"
#include "Bus.h"
#include "Truck.h"

using namespace std;

int main()
{
	Base base;
	Vehicle* ptr;
	double petrol_amount;
	double tank_volume;
	int _people;
	int max_people;
	double _load;
	double max_load;
	int choice;
	cout << "1 - Print base status\n2 - Bus arrives\n3 - Bus leaves\n4 - Truck arrives\n5 - Truck leaves\nPlease choose: ";
	cin >> choice;

	switch (choice)
	{
	case 1:
		cout << "Number of people on the base:" << base.GetPeopleOnBase() << "\nNumber of vehicles on the base: " << base.GetVehiclesOnBase() << "\nAmount of gasoline at the local gas station: " << base.GetPetrolOnBase() << " liters\nAmount of cargo: " << base.GetGoodsOnBase() << " tons";
		break;
	case 2:
		cout << "\nEnter current amount of petrol on the bus: ";
		cin >> petrol_amount;
		cout << "\nEnter maximum amount of petrol on the bus: ";
		cin >> tank_volume;
		cout << "\nEnter current number of people on the bus: ";
		cin >> _people;
		cout << "\nEnter maximum number of people on the bus: ";
		cin >> max_people;
		ptr = new Bus(petrol_amount, tank_volume, _people, max_people);
		ptr->Arrive(base);
		cout << "\nOne bus has arrived.";
		break;
	case 3:
		cout << "\nEnter current amount of petrol on the bus: ";
		cin >> petrol_amount;
		cout << "\nEnter maximum amount of petrol on the bus: ";
		cin >> tank_volume;
		cout << "\nEnter current number of people on the bus: ";
		cin >> _people;
		cout << "\nEnter maximum number of people on the bus: ";
		cin >> max_people;
		ptr = new Bus(petrol_amount, tank_volume, _people, max_people);
		if (ptr->Leave(base))
		{
			cout << "\nOne bus has left.";
		}
		else
		{
			cout << "\nBus cannot leave.";
		}
		break;
	case 4:
		cout << "\nEnter current amount of petrol on the truck: ";
		cin >> petrol_amount;
		cout << "\nEnter maximum amount of petrol on the truck: ";
		cin >> tank_volume;
		cout << "\nEnter current amount of cargo on the truck: ";
		cin >> _load;
		cout << "\nEnter maximum amount of cargo on the truck: ";
		cin >> max_load;
		ptr = new Truck(petrol_amount, tank_volume, _load, max_load);
		ptr->Arrive(base);
		cout << "\nOne truck has arrived.";
		break;
	case 5:
		cout << "\nEnter current amount of petrol on the truck: ";
		cin >> petrol_amount;
		cout << "\nEnter maximum amount of petrol on the truck: ";
		cin >> tank_volume;
		cout << "\nEnter current amount of cargo on the truck: ";
		cin >> _load;
		cout << "\nEnter maximum amount of cargo on the truck: ";
		cin >> max_load;
		ptr = new Truck(petrol_amount, tank_volume, _load, max_load);
		if (ptr->Leave(base))
		{
			cout << "\nOne truck has left.";
		}
		else
		{
			cout << "\nTruck cannot leave.";
		}
		break;
	}
}
