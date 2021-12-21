#include "Door.h"
#include <iostream>

void Door::open() {

	this->door_is_open = true;
	std::cout << "Дверь открыта" << std::endl;

}

void Door::close() {

	this->door_is_open = false;
	std::cout << "Дверь закрыта" << std::endl;

}