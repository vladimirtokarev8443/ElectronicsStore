#pragma once 
#include "IElectronics.h"

class Household: virtual public IElectronics
{
protected:
	int _weight;
public:
	Household(int weight);
	//Household(string name, int price, int year, int weight);
	~Household();
	void show() override;
};

class Refrigerator final : public Household
{
public:
	Refrigerator(string name, int price, int year, int weight);
	~Refrigerator();
	void show() override; 
};

class WashingMachine final : public Household
{
public:
	WashingMachine(string name, int price, int year, int weight);
	~WashingMachine();
	void show() override;
};

