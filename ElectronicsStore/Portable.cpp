#include "Portable.h"

Portable::Portable(int batteryLife): IElectronics(), _batteryLife(batteryLife)
{
	cout << "Create Portable" << endl;
}

Portable::Portable(string name, int price, int year, int battoryLife): IElectronics(name, price, year), _batteryLife(battoryLife)
{
}

Portable::~Portable()
{
	cout << "Delete Portable" << endl;
}

void Portable::show()
{
}

Blender::Blender(string name, int price, int year, int batteryLife): Portable(batteryLife), IElectronics(name, price, year) 
{
	cout << "Create Blender" << endl;
}

Blender::~Blender()
{
	cout << "Delete Blender" << endl;
}


void Blender::show()
{
	cout << "Блендер " << _name << ", год выпуска: " << _year << ", время без подзарядки: " << _batteryLife << "ч" << endl << "Цена: " << _price << endl << endl;
}

Mixer::Mixer(string name, int price, int year, int batteryLife): Portable(batteryLife), IElectronics(name, price, year)
{
	cout << "Create Mixer" << endl;
}

Mixer::~Mixer()
{
	cout << "Delete Mixer" << endl;
}

void Mixer::show()
{
	cout << "Миксер " << _name << ", год выпуска: " << _year << ", время без подзарядки: " << _batteryLife << "ч" << endl << "Цена: " << _price << endl << endl;
}
