#include "Door.h"
#include <iostream>

void Door::open() {

	this->is_open = true;
	std::cout << "����� �������" << std::endl;

}

void Door::close() {

	this->is_open = false;
	std::cout << "����� �������" << std::endl;

}