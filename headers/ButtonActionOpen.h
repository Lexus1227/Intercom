#pragma once
#include "Button.h"

class ButtonActionOpen: public Button{

public:

	ButtonActionOpen(std::string n) : Button(n) {}
	Signal push();

};

