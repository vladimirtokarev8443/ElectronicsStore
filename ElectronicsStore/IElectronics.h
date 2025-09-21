#pragma once
#include <string>
#include <iostream>

using namespace std;

class IElectronics {
protected:
	string _name;
	int _price;
	int _year;
public:
	IElectronics() = default;
	IElectronics(string name, int price, int year) : _name(name), _price(price), _year(year) { cout << "Create IElectronics" << endl; }
	virtual ~IElectronics() { cout << "Delete IElectronics" << endl; }
	virtual void show() = 0;
};
