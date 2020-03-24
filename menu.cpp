#include "menu.h"
#include <iostream>
#include <conio.h>
using namespace std;



menu::menu(int c)
{
	choise = c;
}



menu::~menu()
{
}



int menu::list()
{

	cout << "--- MENU ---" << endl << endl;
	cout << "1. Wczytaj z pliku" << endl;
	cout << "2. Zapisz wyniki w nowym pliku" << endl << endl;
	cout << "3. Dodaj auto" << endl;
	cout << "n4. Usun auto" << endl << endl;
	cout << "5. Wyswietl wszystkie samochody" << endl;
	cout << "n6. Wyswietl warunkowo liste samochodow" << endl;
	cout << "n7. Wyswietl dane pojedynczego samochodu" << endl;
	cout << "n8. Posortuj samochody" << endl << endl;
	cout << "9. Wyjscie z programu" << endl << endl;

	cout << "Twoj wybor: ";
	cin >> choise;
	cout << endl;

	return choise;
}



void menu::PressEnter()
{
	cout << endl << "Nacisnij ENTER, aby kontynuowac..." << endl;
	_getch();
	system("cls");
}