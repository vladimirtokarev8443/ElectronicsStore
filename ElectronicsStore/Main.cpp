#include <iostream>
#include "IElectronics.h"
#include "Household.h"
#include "Portable.h"
#include "Laptop.h"

int main() {
	setlocale(LC_ALL, "RU");
	
	IElectronics* electronics[5];

	electronics[0] = new Refrigerator("LG", 100, 2025, 50);
	electronics[1] = new WashingMachine("Samsung", 100, 2025, 50);
	electronics[2] = new Blender("Philips", 100, 2025, 3);
	electronics[3] = new Mixer("Bosh", 100, 2025, 3);
	electronics[4] = new Laptop("Mac", 100, 2025, 2, 3);

	bool isUse = true;

	while (isUse) {

		cout << endl << "Выбор товара: 0 - 4" << endl << "Выход: любая другая цифра" << endl << endl;
		int num;
		cin >> num;
		
		if (num >= 0 && num <= 4) {
			electronics[num]->show();
		}
		else {
			isUse = false;
		}
	}

	delete electronics[0];
	delete electronics[1];
	delete electronics[2];
	delete electronics[3];
	delete electronics[4];

	return 0;
}