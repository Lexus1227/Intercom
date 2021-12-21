#pragma once
#include "Signal.h"

class Button{

private:

	Signal s;

public:

	virtual Signal push() = 0;

};

