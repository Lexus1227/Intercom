#pragma once
class Door {

private:

	bool is_open = false;


public:

	Door() {};
	void open();
	void close();
	bool& exact_value() { return is_open; };


};