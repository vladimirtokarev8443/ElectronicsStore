#include "Laptop.h"

Laptop::Laptop(string name, int price, int year, int weight, int batteryLife): Household(weight), Portable(batteryLife), IElectronics(name, price, year)
{
	cout << "Create Laptop" << endl;
}

Laptop::~Laptop()
{
	cout << "Delete Laptop" << endl;
}


void Laptop::show()
{
	cout << "Ноутбук " << _name << ", год выпуска: " << _year << ", Вес: " << _weight << " кг" << ", время без подзарядки: " << _batteryLife << "ч" << endl << "Цена: " << _price << endl << endl;
}
