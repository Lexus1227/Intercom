#pragma once
#include "Signal.h"
#include "Button.h"
#include "Journal.h"
#include "Door.h"
#include <map>
#include <thread>


void set_false_after_timing(bool& var, float s);


class Intercom{

private:

	ID id;
	Journal* journal;
	Intercom* conn = nullptr;
	Door* door;
	std::map<char, Button*> buttons;


	virtual void open();
	virtual void connect();
	virtual void call(std::string m);
	virtual void start_block();
	virtual void symb(std::string);

protected:
	bool trying_to_connect = false;
	bool connection = false;
	bool block = false;
	std::string cur;


public:
	
	Intercom(ID i, Door* d, Journal* j, Intercom* _conn = nullptr) : id(i), door(d), journal(j), conn(_conn) {}

	void add_action(Signal s) {

		this->journal->add_action(s);

	}

	Button* get_button(char c) {

		return this->buttons[c];

	}

	virtual void click(char c) = 0;

	void set_connection(Intercom* _conn) {

		this->conn = _conn;

	}

	ID get_id() {

		return this->id;

	}

	Intercom* get_connection() {

		return this->conn;

	}

	void add_button(char c, Button* b) {

		if (buttons.find(c) != buttons.end()) {

			delete buttons[c];

		}
		buttons[c] = b;

	}

	 virtual void do_sth(Signal s) final  {

		switch (s.type_signal) {

			case OPEN_DOOR:
			
				this->open();
				break;

			case RADIO_CONNECTION:
				
				this->connect();
				break;

			case BLOCK:

				this->start_block();
				break;

			case SYMBOL:

				this->symb(s.message);
				break;

			case MESSAGE:

				this->call(s.message);
				break;

		}

	};

	 virtual void show() = 0;

	 ~Intercom() {

		 for (auto& a : buttons) {

			 delete a.second;

		 }


	 }

};

