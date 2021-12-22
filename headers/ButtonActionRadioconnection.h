#pragma once
#include "Button.h"

class ButtonActionRadioconnection: public Button{

public:

	ButtonActionRadioconnection(std::string n) : Button(n) {}
	Signal push();

};

