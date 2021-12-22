#include "Intercom.h"


void set_false_after_timing(bool& var, float s) {

	auto start = std::chrono::system_clock::now();
	auto end = std::chrono::system_clock::now();
	auto elapsed = end - start;

	while (elapsed.count() < s) {

		elapsed.count();

	}
	var = false;

}

void Intercom::open() {

	this->door->open();
	std::thread t1(set_false_after_timing, std::ref(this->door->exact_value()), 5);

};

void Intercom::connect() {

	//this->trying_to_connect = true;

};

void Intercom::call(std::string m) {

	this->connection = true;

};


void Intercom::start_block() {

	block = false;

};


void Intercom::symb(std::string m) {



};