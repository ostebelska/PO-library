#include <exception>
#include <string>
#include <iostream>
#include "Uzytkownik.h"

using namespace std;

#include "Logowanie.h"

void Logowanie::wprowadzenie_danych()
{
	cout << "Wprowadz nr karty:";
	cin >> Uzytkownik.id_karty;
	cout << endl;
	cout << "Wprowadz haslo:";
	cin >> Uzytkownik.haslo;

	if (Uzytkownik.haslo != "root")
	{
		cout << "LOGOWANIE NIE POWIODLO SIE. ZLE HASLO.";
	}
	if (Uzytkownik.id_karty != 1234)
	{
		cout << "LOGOWANIE NIE POWIODLO SIE. ZLY NUMER KARTY.";
	}
}

