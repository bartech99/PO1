#include "car.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <vector>
#include <conio.h>
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



int car::show_all()
{
	cout << "--- Wszystkie samochody ---" << endl << endl;
	cout << "Marka - Model - Rok produkcji - Pojemnosc silnika - Przebieg - Typ skrzyni biegow (manualna/automatyczna):" << endl;
	for (unsigned int i = 0; i < cars.size(); i++)
	{
		cout << cars[i] << endl;
	}
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
			file >> *this;

			//sprawdza czy linia nie jest pusta
			if (1)
			{
				cout << "pusta" << endl;
			}

			cars.push_back(*this);
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
