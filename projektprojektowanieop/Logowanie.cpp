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
	string pass;

	cout << "Wprowadz nr karty:";
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
		cout << "\n9. Wyjdz";
		cout << "\n\n Wpisz swoj wybor : ";

		cin >> ch;
		switch (ch)
		{
		case 1:
			b.wyswietl_szukane();
			break;
		case 2:
		{
			//rez.zarezerwuj();
			int y;

			cout << "Aby wyszukac ksiazke do zarezerwowania, wcisnij dowolny przycisk:" << endl;
			getchar(), getchar();

			b.wyswietl_szukane();
			cout << "Czy napewno chcesz zarezerwowac dana ksiazke?(y/n)" << endl;

			cin >> y;

			if (y == 'y')
			{

				cout << "\t\tPOMYSLNIE ZAREZERWOWANO KSIAZKE." << endl;
				cout << "ZAPRASZAMY DO WYPOZYCZENIA W PUNKCIE STACJONARNYM NASZEJ WYPOZYCZALNI." << endl;
				cout << "\t\tWIECEJ INFORMACJI NA E-MAILU.";

				logowanie();
			}
			else
			{
				cout << "POWROT DO MENU";

				logowanie();
			}

			getchar();

			break;
		}
		case 9:
			exit(0);
		default: cout << "\n\nZly wybor.  Nacisnij jakikolwiek przycisk, aby kontynuowac..";
			getchar();
			break;
		}
		system("cls");
	}
}

