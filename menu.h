#pragma once
#include <iostream>
using namespace std;

class menu
{
public:
	int choise;

	menu(int=0);
	~menu();

	int list();
	void PressEnter();
};