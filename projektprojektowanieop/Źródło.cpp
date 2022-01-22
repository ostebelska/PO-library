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

using namespace std;


class Ksiazka;
class Baza_ksiazek;
class Logowanie;
class Rezerwacja;
class Wypo¿yczenie;
class System;
class Uzytkownik;
class Logowanie;
class Admin;
class Rejestracja;

void panel_sterowania()
{
	string adminUser;
	string adminPassword;
	Baza_ksiazek b;
	Rejestracja r;
	Logowanie l;
	Rezerwacja rez;

	char x;
	int ch;
	int opcja;

	cout << "\n\n\t\t\t------------------------------------------";
	cout << "\n\t\t\t\tWYPOZYCZALNIA KSIAZEK";
	cout << "\n\t\t\t------------------------------------------";
	cout << "\n\n\t\t\tWYBIERZ OPCJE:";
	cout << "\n\t\t\t1.\tZALOGUJ SIE";
	cout << "\n\t\t\t2.\tZAREJESTRUJ SIE";
	cout << "\n\t\t\t3.\tADMINISTRATOR MENU";
	cout << "\n\t\t\t4.\tWYSZUKAJ KSIAZKE";
	cout << "\n\t\t\t5.\tWYJDZ";
	cout << "\n\n Choose your option: ";
	cin >> opcja;

	switch (opcja)
	{
	case 1:
		//logowanie
	{
		cout << "\n\t\t\t\tLOGOWANIE" << endl;

		l.wprowadzenie_danych();

		int ch = 0;
		while (ch != 9)
		{
			system("cls");
			cout << "\n\nPomyslnie zalogowano." << endl;
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
				rez.zarezerwuj();
				break;
			default: cout << "\n\nZly wybor.  Nacisnij jakikolwiek przycisk, aby kontynuowac..";
				getchar();
				break;
			}
			system("cls");
		}
	}
	case 2:
	{
		system("cls");
		cout << "\n\t\t\t\tREJESTRACJA" << endl;
		r.uzupe³nienie_danych();
		cout << endl << endl;
		cout << "\n\t\t\t\tPOMYSLNIE ZAREJESTROWANO. NA TWOJEGO MAILA WYSLANO POTWIERDZENIE." << endl;
		cout << "\n\t\t\t\tSPROBUJ SIE ZALOGOWAC.";
	
		getchar();
		getchar();
		system("cls");

		panel_sterowania();

		break;
	}
	case 3:
		//menu administratora/ pracownika biblioteki

		cout << "\n ---------- PRACOWNIK BIBLIOTEKI -------";
		cout << "\n\n Wpisz login: ";
		cin >> adminUser;
		cout << "\n Wpisz haslo:";
		cin >> adminPassword;

		if (adminUser == "root" && adminPassword == "root")
		{
			int choice = 0;
			while (choice != 9)
			{
				cout << "\n\n Zalogowanie na konto pracownika powiodlo sie!! Nacisnij jakikolwiek przycisk, aby kontynuowac..";
				getchar();
				system("cls");

				cout << "\n1. Dodaj ksiazke";
				cout << "\n2. Usun ksiazke";
				cout << "\n3. List of All Books";
				cout << "\n9. Exit";
				cout << "\n\n Wpisz swoj wybor : ";

				cin >> choice;
				switch (choice)
				{
				case 1:
					do {
						b.dodaj_ksiazke();
						cout << "\n\nCzy chcesz dodac kolejna ksiazke?" << "(y/n) : ";
						cin >> x;
					} while (x == 'y');
					break;

				case 2: b.usun_ksiazke(); break;
				case 3: b.szukaj(); break;
				case 9: exit(0); break;

				default: cout << "\n\nZly wybor.  Nacisnij jakikolwiek przycisk, aby kontynuowac..";
					getchar();
				}
				system("cls");
			}
		}
		else
		{
			cout << "\n\n Blad.  Nacisnij jakikolwiek przycisk, aby kontynuowac..";
			getchar(); getchar();
		}
		break;
	case 4:
		b.wyswietl_szukane();
		break;
	case 5:
		exit(0);
	}
}

int main()
{

	panel_sterowania();

	return 0;


}
