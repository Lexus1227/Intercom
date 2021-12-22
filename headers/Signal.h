#pragma once
#include <string>

typedef long long ID;

enum Type_s {

	OPEN_DOOR,
	RADIO_CONNECTION,
	BLOCK,
	SYMBOL,
	MESSAGE,

};

struct Signal {

	Type_s type_signal;
	ID id;
	std::string message = "";

};