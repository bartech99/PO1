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
	cout << "3. Dodaj samochod" << endl;
	cout << "4. Usun samochod" << endl << endl;
	cout << "5. Wyswietl wszystkie samochody" << endl;
	cout << "6. Wyswietl warunkowo liste samochodow" << endl;
	cout << "7. Wyswietl dane pojedynczego samochodu" << endl;
	cout << "n8. Posortuj samochody" << endl << endl;
	cout << "9. Wyjscie z programu" << endl << endl;

	cout << "Twoj wybor: ";
	cin >> choise;
	cout << endl;

	return choise;
}

int menu::list_condition()
{
	cout << "--- Warunkowa lista samochodow ---" << endl << endl;

	cout << "Wyswietl wg:" << endl;
	cout << "1. Marki" << endl;
	cout << "2. Roku produkcji" << endl;
	cout << "3. Pojemnosci silnika" << endl;
	cout << "4. Przebiegu" << endl;
	cout << "5. Rodzaju skrzyni biegow" << endl;

	cout << "Twoj wybor: ";
	cin >> choise;
	cout << endl;

	while (choise < 1 || choise > 5)
	{
		cout << "Niepoprawny wybor. Sprobuj jeszcze raz: ";
		cin >> choise;
		cout << endl;
	}
	return choise;
}

int menu::list_sort()
{
	cout << "--- Sortowanie listy samochodow ---" << endl << endl;

	cout << "Sortuj wg:" << endl;
	cout << "1. Marki alfabetycznie" << endl;
	cout << "2. Modelu alfabetycznie" << endl;
	cout << "3. Roku produkcji" << endl;
	cout << "4. Pojemnosci silnika" << endl;
	cout << "5. Przebiegu" << endl;
	cout << "6. Rodzaju skrzyni biegow" << endl;

	cout << "Twoj wybor: ";
	cin >> choise;
	cout << endl;

	while (choise < 1 || choise > 6)
	{
		cout << "Niepoprawny wybor. Sprobuj jeszcze raz: ";
		cin >> choise;
		cout << endl;
	}
	return choise;
}



void menu::PressEnter()
{
	cout << endl << "Nacisnij ENTER, aby kontynuowac..." << endl;
	_getch();
	system("cls");
}