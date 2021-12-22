#pragma once
#include "Intercom.h"
#include "ButtonActionOpen.h"
#include "ButtonActionBlock.h"
#include "ButtonActionRadioconnection.h"
#include "ButtonActionSymbol.h"
#include <thread>


class IntercomFlat: private Intercom {

private:
	bool block = false;

public:
	IntercomFlat(ID i, Door* d, Journal* j, Intercom* conn = nullptr) : Intercom(i, d, j, conn) {

		this->add_button('O', new ButtonActionOpen("Open"));
		this->add_button('B', new ButtonActionBlock("Block"));
		this->add_button('R', new ButtonActionRadioconnection("Radio"));

	}

	void click(char c) {

		Button* b = this->get_button(c);
		Signal s = b->push();
		
		if (c == 'B') {

			block = not block;

		}
		else if (c == 'R' and this->trying_to_connect) {

			this->trying_to_connect = false;
			std::thread t(set_false_after_timing, std::ref(this->trying_to_connect), 5);
			t.detach();

		}
		else if (c == 'O' and this->connection) {

			this->connection = false;
			this->add_action(s);
			this->get_connection()->do_sth(s);

		}

	}

	void show() {

		std::cout << "O - Open\nB - Block\nR - Radio\n";

	}

};

