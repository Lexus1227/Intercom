#pragma once
#include "Signal.h"

class Intercom{

private:

	virtual void open();
	virtual void connect();
	virtual void call(std::string m);
	virtual void block();
	virtual void symb();


public:


	 virtual void do_sth(Signal s) final  {

		switch (s.type_signal) {

			case OPEN_DOOR:
			
				this->open();
				break;

			case RADIO_CONNECTION:
				
				this->connect();
				break;

			case BLOCK:

				this->block();
				break;

			case SYMBOL:

				this->symb();
				break;

			case MESSAGE:

				call(s.message);
				break;

		}

	};

};

