#pragma once
#include "Door.h"
#include "Flat.h"
#include <vector>


class Porch{

private:

	Door door = Door();
	std::vector<std::vector<Flat*>> flat;

public:

	Porch(int count_floors, int count_flat_on_floor){
	
		flat.resize(count_floors);
		for (auto& f : flat) {

			f.resize(count_flat_on_floor);

		}
		for (int i = 0; i < count_floors; ++i) {

			for (int j = 0; j < count_flat_on_floor; ++j) {

				flat[i][j] = new Flat(std::to_string(i) + std::to_string(j));

			}

		}
	
	};

	~Porch() {

		for (int i = 0; i <	flat.size(); ++i) {

			for (int j = 0; j < flat[0].size(); ++j) {

				delete flat[i][j];

			}

		}

	}

};

