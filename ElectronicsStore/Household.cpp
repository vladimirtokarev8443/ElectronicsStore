#include "Household.h"

Household::Household(int weight) : IElectronics(), _weight(weight)
{
	cout << "Create Household" << endl;
}

//Household::Household(string name, int price, int year, int weight) : IElectronics(name, price, year), _weight(weight)
//{ 
//	cout << "Create Household" << endl; 
//}

Household::~Household() { cout << "Delete HousHold" << endl; }

void Household::show(){}

Refrigerator::Refrigerator(string name, int price, int year, int weight) : Household(weight), IElectronics(name, price, year)
{ 
	cout << "Create Refrigerator" << endl; 
}

Refrigerator::~Refrigerator() { cout << "Delete Refrigerator" << endl; }

void Refrigerator::show()
{
	cout << "Холодильник " << _name << ", год выпуска: " << _year << ", вес: " << _weight << " кг" << endl << "Цена: " << _price << endl << endl;
}

WashingMachine::WashingMachine(string name, int price, int year, int weight): Household(weight), IElectronics(name, price, year)
{ 
	cout << "Create washingMasnine" << endl; 
}

WashingMachine::~WashingMachine() { cout << "Delete WashingMachine" << endl; }

void WashingMachine::show()
{
	cout << "Стиральная машина " << _name << ", год выпуска: " << _year << ", вес: " << _weight << " кг" << endl << "Цена: " << _price << endl << endl;
}
