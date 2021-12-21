#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Porch.h"

class Home{

private:

	std::string address;
	int count_porch;
	std::vector<Porch*> porch;


public:

	Home(std::string _address = "Костюкова", \
		int _count_porch = 5, int count_floors = 5, \
		int count_flat_on_floor = 2) : \
		address(_address), count_porch(_count_porch) {
	
		porch.resize(count_porch);
		for (int i = 0; i < count_porch; ++i) {

			porch[i] = new Porch(count_floors, count_flat_on_floor);

		}

	};

	~Home() {

		for (auto p : porch) {

			delete p;

		}

	};

};

