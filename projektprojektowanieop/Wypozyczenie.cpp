#include <exception>
#include <iostream>
using namespace std;

#include "Wypozyczenie.h"

void Wypozyczenie::zeskanuj_ksiazke()
{
	cout << "Wypozyczenie przebieglo pomyslnie." << endl;
	getchar(), getchar();
}

void Wypozyczenie::szukaj_ksiazki()
{
	throw "Not yet implemented";
}

