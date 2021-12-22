#pragma once
#include "Button.h"
#include "Signal.h"
#include <map>
#include <string>


class ButtonActionSymbol : public Button{

private:
	
	std::string symbol;

public:

	ButtonActionSymbol(std::string n, std::string _symbol) : Button(n), symbol(_symbol) {};

	Signal push();

};

