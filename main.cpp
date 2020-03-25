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

			c.remove();
			break;

		case 5:

			c.show_all();
			break;

		case 6:

			c.show_condition(m.list_condition());
			break;

		case 7:

			c.find();
			break;

		case 8:

			c.show_sort(m.list_sort());
			break;

		default:

			cout << "Nieprawidlowy wybor. Sprobuj jeszcze raz." << endl;
			break;
		}
		m.PressEnter();
	}

	return 0;
}