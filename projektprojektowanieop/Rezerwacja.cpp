#include <exception>
#include <string>
#include <iostream>
using namespace std;

#include "Rezerwacja.h"
#include"Baza_ksiazek.h"
#include"Ksiazka.h"
#include"Uzytkownik.h"

void Rezerwacja::sprawdzRezerwacje()
{
	throw "Not yet implemented";
}

void Rezerwacja::zarezerwuj()
{
	
	//rez.zarezerwuj();
	string y;

	cout << "Aby wyszukac ksiazke do zarezerwowania, wcisnij dowolny przycisk:" << endl;
	getchar(), getchar();

	b.wyswietlSzukane();

	cout << "Czy napewno chcesz zarezerwowac dana ksiazke?(y/n)" << endl;

	cin >> y;

	if (y == "y")
	{
		cout << "\t\tPOMYSLNIE ZAREZERWOWANO KSIAZKE." << endl;
		cout << "ZAPRASZAMY DO WYPOZYCZENIA W PUNKCIE STACJONARNYM NASZEJ WYPOZYCZALNI." << endl;
		cout << "\t\tWIECEJ INFORMACJI NA E-MAILU." << endl << endl;

		system("pause");
	}
	else
	{
		cout << "POWROT DO MENU";
	}
}
