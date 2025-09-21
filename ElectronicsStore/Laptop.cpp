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
	cout << "������� " << _name << ", ��� �������: " << _year << ", ���: " << _weight << " ��" << ", ����� ��� ����������: " << _batteryLife << "�" << endl << "����: " << _price << endl << endl;
}
