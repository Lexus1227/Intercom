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
		std::cout << "���� ������������ ����� �������\n";
		while (message != "q") {

			std::cout << "����� \\list ��� ������ ������ �������\n";
			std::cout << "����� \\change id/-1 ��� ��������� �������� ��������/��������\n";
			main->show();
			std::cout << std::endl;
			std::cin >> message;
			if (message.substr(0, 5) == "\\list") {

				std::cout << "�������\n";
				std::cout << "��������\n";

			}
			else if (message.substr(0, 7) == "\\change") {

				std::cout << "��������\n";

			}
			else {


				//google escape ������������������
				//google ����������������� slash

				main->click(message[0]);

			}

		}
		std::cout << "�� ��������\n";
		

	}

};

