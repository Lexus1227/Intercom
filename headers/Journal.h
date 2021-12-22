#pragma once
#include "Signal.h"
#include <string>
#include <fstream>
#include <iostream>
#include <chrono>


class Journal {

	private:
	std::ofstream out;

	public:
	Journal(std::string fname = "journal") { 
		
		out.open(fname); 
	
	}

	void add_action(Signal s) {

		if (s.type_signal == Type_s::OPEN_DOOR) {
			
			out << "OPEN DOOR | " << " ID = " << s.id << " | " << " TIME = " << std::chrono::system_clock::now() << std::endl;
		
		}

	};

	~Journal() {

		out.close();

	}

};

