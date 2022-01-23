#include <exception>
#include <string>
#include <iostream>
#include <fstream>
#include "Uzytkownik.h"
#include "Rezerwacja.h"

using namespace std;

#include "Logowanie.h"

void Logowanie::wprowadzenieDanych(int kod, string haslo)
{
	int id;
	char c;
	string pass;

	cout <<endl<<"Wprowadz ID karty:";
	cin >> id;
	cout << endl;
	cout << "Wprowadz haslo:";

	cin >> pass;

	if (pass != haslo || id != kod)
	{
		cout << "LOGOWANIE NIE POWIODLO SIE. ZLE DANE.";
	}
	else
	{
		logowanie();
	}	
}

void Logowanie::logowanie()
{
	int choice = 0;
	int y;

	while (choice != 3)
	{
		system("cls");
		cout << "\n\nZALOGOWANO POMYSLNIE." << endl << endl;
		cout << "\n1. Szukaj ksiazki";
		cout << "\n2. Zarezerwuj ksiazke";
		cout << "\n3. Wyloguj sie";
		cout << "\n\n Wpisz swoj wybor : ";

		cin >> choice;
		switch (choice)
		{
		case 1:
			b.wyswietlSzukane();
			system("pause");
			break;
		case 2:
		{
			rez.zarezerwuj();
			break;
		}
		case 3:
			exit(0);
		default: cout << "\n\nZly wybor." << endl;
			system("pause");
			break;
		}
		system("cls");
	}
}

