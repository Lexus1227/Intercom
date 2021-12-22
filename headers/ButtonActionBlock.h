#pragma once
#include "Button.h"
#include "Signal.h"

class ButtonActionBlock: public Button{

public:

	ButtonActionBlock(std::string n) : Button(n) {}
	Signal push();

};

