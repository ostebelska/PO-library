#include <exception>
#include <string>
#include <iostream>
using namespace std;

#include"Ksiazka.h"

void Ksiazka::zmien_status()
{

	string status;
	cout << "KSIAZKA DOSTEPNA";
	cout << "KSIAZKA NIEDOSTEPNA";

	switch (ch)
	{
	case 1:
		status = "dostepny";
	case 2:
		status = "niedostepny";
	}

}


void Ksiazka::zarezerwuj()
{
	throw "Not yet implemented";
}

void Ksiazka::zobacz_opis()
{
	//wyswietlenie pelnego opisu
	cout << "\n\t\tKod ksiazki: " << kod << endl;
	cout << "\n\t\tTytul: " << tytul << endl;
	cout << "\n\t\tImie i nazwisko autora: " << autor << endl;
	cout << "\n\t\tNazwa wydawnictwa: " << wydawnictwo << endl;
}


