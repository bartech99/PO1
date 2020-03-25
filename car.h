#pragma once
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <vector>
#include <conio.h>
using namespace std;



class car
{
	//zmienne
	string brand;
	string model;
	unsigned short year;
	unsigned short capacity;
	unsigned int milleage;
	string gearbox;

	//wektor
	vector <car> cars;

public:
	
	//metody
	int add();
	int show_sort(int);
	int show_all();
	int show_condition(int);
	int find();
	int remove();
	int file_out();
	int file_in();

	//konstruktor i destruktor
	car(string = "brak", string = "brak", unsigned short = 0, unsigned short = 0, unsigned int = 0, string = "brak");
	~car();

	//przeciazenia
	friend ostream& operator<< (ostream& os, const car& c);
	friend istream& operator>> (istream& is, car& c);
	friend fstream& operator>>(fstream& is, car& c);
};