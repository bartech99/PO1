#include "car.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <vector>
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
	os << c.brand << " " << c.model << " " << c.year << " " << c.capacity << " " << c.milleage << " " << c.gearbox;
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
