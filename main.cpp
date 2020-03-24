#include "car.h"
#include "menu.h"

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <vector>
using namespace std;

int main()
{
	menu m;
	car c;

	while (m.list() != 9)
	{
		switch (m.choise)
		{
		case 1:
			c.file_in();
			break;

		case 2:
			c.file_out();
			break;

		case 3:
			c.add();
			break;

		case 4:
			break;

		case 5:
			c.show_all();
			break;

		case 6:
			break;

		case 7:
			break;

		case 8:
			break;

		default:
			cout << "Nieprawidlowy wybor. Sprobuj jeszcze raz." << endl;
			break;
		}
		m.PressEnter();
	}

	return 0;
}