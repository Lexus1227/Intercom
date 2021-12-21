#pragma once
class Door{

private:

	bool door_is_open;

	void open();
	void close();

public:

	Door() : door_is_open(false) {};


};

