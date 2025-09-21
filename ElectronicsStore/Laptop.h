#pragma once
#include "Household.h"
#include "Portable.h"

class Laptop final: public Household, public Portable
{
public:
	Laptop(string name, int price, int year, int weight, int batteryLife);
	~Laptop();
	void show() override;
};

