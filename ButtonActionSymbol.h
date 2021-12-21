#pragma once
#include "Button.h"
#include "Signal.h"
#include <map>
#include <string>


class ButtonActionSymbol : public Button{

private:
	
	std::string symbol;

public:

	ButtonActionSymbol(std::string _symbol) : symbol(_symbol) {};

	Signal push();

};

