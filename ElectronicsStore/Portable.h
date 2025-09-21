#pragma once 
#include "IElectronics.h"

class Portable: virtual public IElectronics
{
protected:
	int _batteryLife;
public:
	Portable(int batteryLife);
	Portable(string name, int price, int year, int batteryLife);
	~Portable();
	void show() override;
};

class Blender final: public Portable
{
public:
	Blender(string name, int price, int year, int batteryLife);
	~Blender();
	void show() override;
};

class Mixer final: public Portable
{
public:
	Mixer(string name, int price, int year, int batteryLife);
	~Mixer();
	void show() override;
};
