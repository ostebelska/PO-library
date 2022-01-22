#include <exception>
#include <string>
using namespace std;
#include "Baza_ksiazek.h"
#include "Logowanie.h"
#include "Rejestracja.h"
#include "Rezerwacja.h"
#include "Zwrot.h"
#include "Wypozyczenie.h"
#include "System.h"
#include "Ksiazka.h"
#include "Pracownik_biblioteki.h"
#include "Raport.h"

void Pracownik_biblioteki::logowanie()
{
	throw "Not yet implemented";
}

void Pracownik_biblioteki::raport() {
	
	string adminUser;
	string adminPassword;

	cout << "\n ---------- PRACOWNIK BIBLIOTEKI -------";
	cout << "\n\n Wpisz login: ";
	cin >> adminUser;
	cout << "\n Wpisz haslo:";
	cin >> adminPassword;

	if (adminUser == "root" && adminPassword == "root")
	{
		menu_pracownika();			//PANEL STEROWANIA DLA  PRACOWNIKA BIBLIOTEKI
	}
	else
	{
		cout << "\n\n Blad.  Nacisnij jakikolwiek przycisk, aby kontynuowac..";
		getchar(); getchar();
	}
}

void Pracownik_biblioteki::menu_pracownika()
{
	System s;
	Ksiazka ks;
	Wypozyczenie w;
	Zwrot z;
	Baza_ksiazek b;
	Raport raport;

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
		cout << "\n6. Utworz raport";
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
		case 6:
			raport.utworz_raport();
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