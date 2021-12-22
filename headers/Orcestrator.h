#pragma once
#include "Intercom.h"
#include "IntercomPorch.h"
#include <vector>


class Orcestrator{

	std::vector<Intercom*> inters;
	Intercom* main;
public:
	void run() {

		main = new IntercomPorch(0, nullptr, nullptr, nullptr);
		std::string message;
		std::cin >> message;
		std::cout << "Тебя приветствует умный домофон\n";
		while (message != "q") {

			std::cout << "Введи \\list для вывода списка квартир\n";
			std::cout << "Введи \\change id/-1 для изменения домофона квартиры/внешнего\n";
			main->show();
			std::cout << std::endl;
			std::cin >> message;
			if (message.substr(0, 5) == "\\list") {

				std::cout << "Внешний\n";
				std::cout << "Квартиры\n";

			}
			else if (message.substr(0, 7) == "\\change") {

				std::cout << "Изменить\n";

			}
			else {


				//google escape последовательность
				//google экранированироние slash

				main->click(message[0]);

			}

		}
		std::cout << "До свидания\n";
		

	}

};

