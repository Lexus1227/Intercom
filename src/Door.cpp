#include "Door.h"
#include <iostream>

void Door::open() {

	this->door_is_open = true;
	std::cout << "����� �������" << std::endl;

}

void Door::close() {

	this->door_is_open = false;
	std::cout << "����� �������" << std::endl;

}