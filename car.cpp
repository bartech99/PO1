#include "car.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <vector>
#include <conio.h>
#include <algorithm>
using namespace std;



int car::add()
{
	cout << "--- Dodawanie nowego auta ---" << endl << endl;
	cout << "Marka - Model - Rok produkcji - Pojemnosc silnika - Przebieg - Typ skrzyni biegow (manualna/automatyczna):" << endl;
	cin >> *this;
	cars.push_back(*this);
	cout << endl << "Pojazd zostal dodany!" << endl;
	return 0;
}

int car::show_sort(int choise)
{
	bool order = false;
	cout << "0 - rosnaco, 1 - malejaco: ";
	cin >> order;

	switch (choise)
	{
	case 1:

		//
		break;

	case 2:

		//
		break;

	case 3:

		//
		break;

	case 4:

		//
		break;

	case 5:

		//
		break;

	case 6:

		//
		break;

	}

	if (order)
		reverse(cars.begin(), cars.end());

	cout << endl;
	show_all();

	return 0;
}



int car::show_all()
{
	cout << "--- Wszystkie samochody ---" << endl << endl;
	cout << "Marka - Model - Rok produkcji - Pojemnosc silnika - Przebieg - Typ skrzyni biegow (manualna/automatyczna):" << endl;
	if (cars.size() == 0)
	{
		car temp;
		cout << temp << endl;
	}
	else
	{
		for (unsigned int i = 0; i < cars.size(); i++)
		{
			cout << cars[i] << endl;
		}
	}
	return 0;
}


int car::show_condition(int choise)
{
	string choise1;
	unsigned int choise2 = 0;
	bool choise3 = false;
	bool var_choise = false;
	unsigned int it = 0;
	car result;

	switch (choise)
	{
	case 1:

		cout << "Podaj marke: ";
		cin >> choise1;
		cout << endl << "--- Pasujace wyniki ---" << endl;

		for (unsigned int i = 0; i < cars.size(); i++)
		{
			result = cars[i];
			if (result.brand == choise1)
			{
				cout << ++it << ". " << result << endl;
			}
		}

		if (it == 0)
		{
			cout << "Brak pasujacych wynikow." << endl;
		}

		break;

	case 2:

		cout << "0 - wieksze lub rowne, 1 - mniejsze niz: ";
		cin >> choise3;
		cout << endl << "Wartosc: ";
		cin >> choise2;
		cout << endl << "--- Pasujace wyniki ---" << endl;

		if (choise3)
		{
			for (unsigned int i = 0; i < cars.size(); i++)
			{
				result = cars[i];
				if (result.year < choise2)
				{
					cout << ++it << ". " << result << endl;
				}
			}
		}
		else
		{
			for (unsigned int i = 0; i < cars.size(); i++)
			{
				result = cars[i];
				if (result.year >= choise2)
				{
					cout << ++it << ". " << result << endl;
				}
			}
		}

		if (it == 0)
		{
			cout << "Brak pasujacych wynikow." << endl;
		}

		break;

	case 3:

		cout << "0 - wieksze lub rowne, 1 - mniejsze niz: ";
		cin >> choise3;
		cout << endl << "Wartosc: ";
		cin >> choise2;
		cout << endl << "--- Pasujace wyniki ---" << endl;

		if (choise3)
		{
			for (unsigned int i = 0; i < cars.size(); i++)
			{
				result = cars[i];
				if (result.capacity < choise2)
				{
					cout << ++it << ". " << result << endl;
				}
			}
		}
		else
		{
			for (unsigned int i = 0; i < cars.size(); i++)
			{
				result = cars[i];
				if (result.capacity >= choise2)
				{
					cout << ++it << ". " << result << endl;
				}
			}
		}

		if (it == 0)
		{
			cout << "Brak pasujacych wynikow." << endl;
		}
		break;

	case 4:

		cout << "0 - wieksze lub rowne, 1 - mniejsze niz: ";
		cin >> choise3;
		cout << endl << "Wartosc: ";
		cin >> choise2;
		cout << endl << "--- Pasujace wyniki ---" << endl;

		if (choise3)
		{
			for (unsigned int i = 0; i < cars.size(); i++)
			{
				result = cars[i];
				if (result.milleage < choise2)
				{
					cout << ++it << ". " << result << endl;
				}
			}
		}
		else
		{
			for (unsigned int i = 0; i < cars.size(); i++)
			{
				result = cars[i];
				if (result.milleage >= choise2)
				{
					cout << ++it << ". " << result << endl;
				}
			}
		}

		if (it == 0)
		{
			cout << "Brak pasujacych wynikow." << endl;
		}
		break;

	case 5:

		cout << "m - manualna, a - automatyczna: ";
		cin >> choise1;

		while (choise1 != "a" && choise1 != "m")
		{
			cout << "Niepoprawny wybor." << endl;
			cout << "m - manualna, a - automatyczna: ";
			cin >> choise1;
		}

		cout << endl << "--- Pasujace wyniki ---" << endl;

		if (choise1 == "m")
		{
			for (unsigned int i = 0; i < cars.size(); i++)
			{
				result = cars[i];
				if (result.gearbox == "manualna")
				{
					cout << ++it << ". " << result << endl;
				}
			}
		}
		else
		{
			for (unsigned int i = 0; i < cars.size(); i++)
			{
				result = cars[i];
				if (result.gearbox == "automatyczna")
				{
					cout << ++it << ". " << result << endl;
				}
			}
		}

		if (it == 0)
		{
			cout << "Brak pasujacych wynikow." << endl;
		}

		break;
	}
	return 0;
}



int car::find()
{
	unsigned int it = 0;
	car result;
	string f_brand, f_model;

	cout << "--- Wyszukiwanie szczegolow samochodu ---" << endl << endl;
	cout << "Marka: ";
	cin >> f_brand;
	cout << "Model: ";
	cin >> f_model;
	cout << endl;
	
	cout << "--- Pasujace wyniki ---" << endl;
	for (unsigned int i = 0; i < cars.size(); i++)
	{
		result = cars[i];
		if (result.brand == f_brand && result.model == f_model)
		{
			cout << ++it << ". " << result << endl;
		}
	}

	if (!it)
	{
		cout << "Nie znaleziono pasujacych wynikow." << endl;
	}

	return 0;
}



int car::remove()
{
	unsigned int it = 0, pos_to_remove = 0;
	car result;
	string f_brand, f_model;
	vector <unsigned int> pos;	 //kojarzy liczbe porzadkowa znalezionego obiektu z jej pozycja w wektorze

	cout << "--- Usuwanie samochodu ---" << endl << endl;
	cout << "Marka: ";
	cin >> f_brand;
	cout << "Model: ";
	cin >> f_model;
	cout << endl;

	cout << "--- Pasujace wyniki ---" << endl;
	for (unsigned int i = 0; i < cars.size(); i++)
	{
		result = cars[i];
		if (result.brand == f_brand && result.model == f_model)
		{
			cout << ++it << ". " << result << endl;
			pos.push_back(i);
		}
	}

	while(1)	//pobiera i sprawdza indeks
	{
		cout << endl << "Usun pozycje nr: ";
		cin >> pos_to_remove;

		if (pos_to_remove > pos.size() || pos_to_remove < 1)
			cout << "Nieprawidlowa wartosc." << endl;
		else
			break;
	}

	cars.erase(cars.begin() + pos[pos_to_remove-1]);

	cout << endl << "Pojazd zostal usuniety!" << endl;

	return 0;
}



int car::file_out()
{
	fstream file;
	string name;

	cout << "--- Zapisywanie rezultatow do nowego pliku ---" << endl << endl;
	cout << "Podaj nazwe pliku: ";
	cin >> name;

	//sprawdza czy nazwa zawiera .txt
	int s = name.size();
	if (!(name[s - 1] == 't' && name[s - 2] == 'x' && name[s - 3] == 't' && name[s - 4] == '.'))
	{
		name += ".txt";
	}
	
	//otwiera plik i sprawdza czy sie udalo
	file.open(name, ios::out);
	if (file.good() == false)
	{
		cout << "Nie uda³o siê utworzyæ pliku!";
	}
	else
	{
		//sprawdza czy wektor nie jest pusty
		if (cars.size() == 0)
		{
			cout << "Brak danych w bazie!" << endl;
			cars.push_back(*this);
		}

		//zapisuje zawartosc wektora do pliku
		file << "Marka - Model - Rok produkcji - Pojemnosc silnika - Przebieg - Typ skrzyni biegow (manualna/automatyczna):" << endl;
		for (unsigned int i = 0; i < cars.size(); i++)
			file << cars[i] << endl;

		file.close();

		cout << "Zapis wykonany pomyslnie!" << endl;
	}

	return 0;
}



int car::file_in()
{
	fstream file;
	string name, line;

	cout << "--- Wczytywanie danych z pliku ---" << endl << endl;

	cout << "Podaj nazwe pliku: ";
	cin >> name;

	//sprawdza czy zawiera .txt
	int s = name.size();
	if (!(name[s - 1] == 't' && name[s - 2] == 'x' && name[s - 3] == 't' && name[s - 4] == '.'))
	{
		name += ".txt";
	}

	//otwiera plik i sprawdza czy sie udalo
	file.open(name, ios::in);
	if (file.good() == false)
		cout << "Plik o podanej nazwie nie istnieje!";
	else
	{
		//ignoruje linie tytulowa
		getline(file, line);

		//wczytuje kolejne linie az do konca pliku i wrzuca je do wektora
		while (!file.eof())
		{
			car temp;
			file >> temp;

			//sprawdza czy linia nie jest pusta
			if (temp.brand != "brak")
				cars.push_back(temp);
		}

		cout << "Odczyt wykonany pomyslnie!" << endl;
	}
	return 0;
}



car::car(string b, string m, unsigned short y, unsigned short c, unsigned int mi, string gb)
{
	brand = b;
	model = m;
	year = y;
	capacity = c;
	milleage = mi;
	gearbox = gb;
}



car::~car()
{}



ostream& operator<<(ostream& os, const car& c)
{
	os << c.brand << "\t" << c.model << "\t" << c.year << "\t" << c.capacity << "\t" << c.milleage << "\t" << c.gearbox;
	return os;
}



istream& operator>>(istream& is, car& c)
{
	is >> c.brand;
	is >> c.model;
	is >> c.year;
	is >> c.capacity;
	is >> c.milleage;
	is >> c.gearbox;
	return is;
}



fstream& operator>>(fstream& is, car& c)
{
	is >> c.brand;
	is >> c.model;
	is >> c.year;
	is >> c.capacity;
	is >> c.milleage;
	is >> c.gearbox;
	return is;
}