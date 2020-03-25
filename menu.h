#pragma once
#include <iostream>
using namespace std;

class menu
{
public:

	//zmienne
	int choise;

	//konstruktor i destruktor
	menu(int=0);
	~menu();

	//metody
	int list();
	int list_condition();
	int list_sort();
	void PressEnter();
};