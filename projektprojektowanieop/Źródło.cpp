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

void menu_admina()
{
	System s;
	Ksiazka ks;
	Wypozyczenie w;
	Zwrot z;
	Baza_ksiazek b;

	char x;

	cout << "\n\n Zalogowanie na konto pracownika powiodlo sie!! Nacisnij jakikolwiek przycisk, aby kontynuowac..";
	getchar();
	getchar();
	system("cls");

	int choice = 0;
	while (choice != 9)
	{

		cout << "\n1. Dodaj ksiazke";
		cout << "\n2. Usun ksiazke";
		cout << "\n3. Wyswietl wszystkie ksiazki";
		cout << "\n4. Wypozycz";
		cout << "\n5. Zwroc";
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
		case 4:
			cout << "Zeskanuj ksiazke." << endl;
			w.zeskanuj_ksiazke();
			break;
		case 5:
			cout << "Zeskanuj ksiazke." << endl;
			if (ks.kara = true)
				z.oplata();
			else
				cout << "ZWROT PRZEBIEGL POMYSLNIE." << endl;
			break;
		case 9: exit(0); break;

		default:
		{
			cout << "\n\nZly wybor.  Nacisnij jakikolwiek przycisk, aby kontynuowac..";
			getchar();
		}
		}
		system("cls");
	}
}
void panel_sterowania()
{
	string adminUser;
	string adminPassword;
	Baza_ksiazek b;
	Rejestracja r;
	Logowanie l;
	Rezerwacja rez;
	Wypozyczenie w;
	Zwrot z;
	System s;
	Ksiazka ks;

	int k = 1234;
	string h = "root";

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

		l.wprowadzenie_danych(k,h);

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
			case 9:
				exit(0);
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
	
		getchar(); getchar();
		system("cls");

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
			menu_admina();
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
