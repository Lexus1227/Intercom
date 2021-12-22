#pragma once
#include "Intercom.h"
#include "ButtonActionSymbol.h"

class IntercomPorch : public Intercom {

public:

	IntercomPorch(ID i, Door* d, Journal* j, Intercom* conn) : Intercom(i, d, j, conn) {

		this->add_button('0', new ButtonActionSymbol("0", "0"));
		this->add_button('1', new ButtonActionSymbol("1", "1"));
		this->add_button('2', new ButtonActionSymbol("2", "2"));
		this->add_button('3', new ButtonActionSymbol("3", "3"));
		this->add_button('4', new ButtonActionSymbol("4", "4"));
		this->add_button('5', new ButtonActionSymbol("5", "5"));
		this->add_button('6', new ButtonActionSymbol("6", "6"));
		this->add_button('7', new ButtonActionSymbol("7", "7"));
		this->add_button('8', new ButtonActionSymbol("8", "8"));
		this->add_button('9', new ButtonActionSymbol("9", "9"));

		this->add_button('*', new ButtonActionSymbol("*", "*"));
		this->add_button('#', new ButtonActionSymbol("#", "#"));

	}


	void click(char c) {

		//Signal s = this->

	}

	void show() {

		std::cout << "\
-----------\n\
|1 | 2 | 3|\n\
|4 | 5 | 6|\n\
|7 | 8 | 9|\n\
|* | 0 | #|\n\
-----------\n";

	}


};

