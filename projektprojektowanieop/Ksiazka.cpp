#include <exception>
#include <string>
#include <iostream>
using namespace std;

#include"Ksiazka.h"

void Ksiazka::zmienStatus()
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

void Ksiazka::wyswietlStatus(bool status)
{
	if (status = true)
	{
		cout << "KSIAZKA JEST DOSTEPNA!";
	}
	else
		cout << "KSIAZKA NIEDOSTEPNA";
}



