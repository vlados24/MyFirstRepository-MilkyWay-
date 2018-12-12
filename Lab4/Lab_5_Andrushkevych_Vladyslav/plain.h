#define PLAIN_H
#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class Plain
{
private:
	double volume_in_liters;
	string name;
	int number_of_passangers;

protected:
	string type;
	int MaxDistance;

public:
	int number_of_engines;
	string model;

	Plain() {
		volume_in_liters = 1000;
		name = "Boing";
		number_of_passangers = 150;
		type = "passanger";
		MaxDistance = 3000;
		model = "FP-305";
		get();
	}

	Plain(double volume_in_liters, string name, int number_of_passangers, string type, int MaxDistance, int number_of_engines, string model) {
		volume_in_liters = volume_in_liters;
		name = name;
		number_of_passangers = number_of_passangers;
		type = type;
		MaxDistance = MaxDistance;
		number_of_engines = number_of_engines;
		model = model;
	}
	~Plain() {
		cout << "Destructor" << endl;
	}


	void Plain2(double setVolume, string setName, int setNumber) {
		volume_in_liters = setVolume;
		name = setName;
		number_of_passangers = setNumber;
		type = "blocks";
		MaxDistance = 2000;
		number_of_engines = 4;
		model = "RP-220";

		get();
	}

	void Plain3(double setVolume, string setName, int setNumber) {
		volume_in_liters = setVolume;
		name = setName;
		number_of_passangers = setNumber;
		type = "Birds";
		MaxDistance = 4000;
		number_of_passangers = 305;
		number_of_engines = 6;
		model = "KS-210";
		get();

	}

	void get() {
		cout << "Volume " << volume_in_liters << endl;
		cout << "Name " << name << endl;
		cout << "Passangers " << number_of_passangers << endl;
		cout << "Type Plane " << type << endl;
		cout << "Distance " << MaxDistance << endl;
		cout << "Number of passangers " << number_of_passangers << endl;
		cout << "Number of engines " << number_of_engines << endl;
		cout << "Model " << model << endl;
		cout << "\n" << endl;
	}
};