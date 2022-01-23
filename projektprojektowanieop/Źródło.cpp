#include <iostream>
#include <string.h>
#include <stdio.h>
#include <time.h>
#include <fstream>
#include <exception>
#include "Baza_ksiazek.h"
#include "Logowanie.h"
#include "Rejestracja.h"
#include "Rezerwacja.h"
#include "Zwrot.h"
#include "Wypozyczenie.h"
#include "System.h"
#include "Ksiazka.h"
#include "Pracownik_biblioteki.h"

using namespace std;


class Ksiazka;
class Baza_ksiazek;
class Logowanie;
class Rezerwacja;
class Wypo¿yczenie;
class System;
class Uzytkownik;
class Logowanie;
class Rejestracja;

//	OGOLNY PANEL STEROWANIA/MENU

void panel_sterowania()
{
	

	Baza_ksiazek b;
	Rejestracja r;
	Logowanie l;
	Rezerwacja rez;
	Wypozyczenie w;
	Zwrot z;
	System s;
	Ksiazka ks, ks2;
	Pracownik_biblioteki pracownik;


	int k = 1234;
	string h = "root";

	char x;
	int ch;
	int opcja;
	string y;

	cout << "\n\n\t\t\t------------------------------------------";
	cout << "\n\t\t\t\tWYPOZYCZALNIA KSIAZEK";
	cout << "\n\t\t\t------------------------------------------";
	cout << "\n\n\t\t\tWYBIERZ OPCJE:";
	cout << "\n\t\t\t1.\tZALOGUJ SIE";
	cout << "\n\t\t\t2.\tZAREJESTRUJ SIE";
	cout << "\n\t\t\t3.\tADMINISTRATOR MENU";
	cout << "\n\t\t\t4.\tWYSZUKAJ KSIAZKE";
	cout << "\n\t\t\t5.\tWYJDZ";
	cout << "\n\n Wybierz odpowiednia opcje: ";
	cin >> opcja;

	switch (opcja)
	{
	case 1:
	{
		cout << "\n\t\t\t\tLOGOWANIE" << endl;

		l.wprowadzenie_danych(k, h); //ustalone wartosci dla hasla i id karty
		break;
	}
	case 2:
	{
		system("cls");
		cout << "\n\t\t\t\tREJESTRACJA" << endl;
		r.uzupe³nienie_danych();

		cout << endl << endl;

		getchar(), getchar();
		system("cls");
	}
		break;

	case 3:
	{
		pracownik.logowanie();
		break;
	}
	case 4:
	{
		b.wyswietl_szukane();
		cout << endl << "Chcesz powrocic do panelu glownego?(y/n)" << endl;
		cin >> y;
		if (y == "y")
		{
			system("cls");
			panel_sterowania();
		}
		else
			exit(0);
		break;
	}
	case 5:
		exit(0);
	}
}

int main()
{
	panel_sterowania();

	return 0;
}
