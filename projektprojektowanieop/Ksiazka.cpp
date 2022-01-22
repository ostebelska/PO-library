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



