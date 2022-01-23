#include <exception>
#include <string>
#include <iostream>
#include<fstream>
#include "Uzytkownik.h"
#include"Rezerwacja.h"

using namespace std;

#include "Logowanie.h"

void Logowanie::wprowadzenie_danych(int kod, string haslo)
{
	int nr;
	char c;
	string pass;

	cout <<endl<<"Wprowadz ID karty:";
	cin >> nr;
	cout << endl;
	cout << "Wprowadz haslo:";

	cin >> pass;

	if (pass != haslo || nr != kod)
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
	int ch = 0;
	int y;

	while (ch != 9)
	{
		system("cls");
		cout << "\n\nZALOGOWANO POMYSLNIE." << endl << endl;
		cout << "\n1. Szukaj ksiazki";
		cout << "\n2. Zarezerwuj ksiazke";
		cout << "\n9. Wyloguj sie";
		cout << "\n\n Wpisz swoj wybor : ";

		cin >> ch;
		switch (ch)
		{
		case 1:
			b.wyswietl_szukane();
			system("pause");
			break;
		case 2:
		{
			rez.zarezerwuj();
			break;
		}
		case 9:
			exit(0);
		default: cout << "\n\nZly wybor." << endl;
			system("pause");
			break;
		}
		system("cls");
	}
}

