#pragma once
#include "Signal.h"

class Button{

private:

	Signal s;
	std::string name;

public:

	Button(std::string n = "") : name(n) {}
	virtual Signal push() = 0;

};

