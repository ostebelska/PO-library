#include <exception>
#include <string>
#include <iostream>
#include "Uzytkownik.h"

using namespace std;

#include "Logowanie.h"


void Logowanie::wprowadzenie_danych(int kod, string haslo)
{
	
	int nr;
	string pass;

	uzytkownik.haslo = haslo;
	uzytkownik.id_karty = kod;

	cout << "Wprowadz nr karty:";
	cin >> nr;
	cout << endl;
	cout << "Wprowadz haslo:";
	cin >> pass;

	if (pass != uzytkownik.haslo || nr != uzytkownik.id_karty)
	{
		cout << "LOGOWANIE NIE POWIODLO SIE. ZLE DANE.";
	}
	else
		cout << "LOGOWANIE POWIODLO SIE.";
	
}

