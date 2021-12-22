#include "Door.h"
#include <iostream>

void Door::open() {

	this->is_open = true;
	std::cout << "Дверь открыта" << std::endl;

}

void Door::close() {

	this->is_open = false;
	std::cout << "Дверь закрыта" << std::endl;

}