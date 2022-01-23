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
	string admin_login;
	string admin_haslo;

	system("cls");

	cout << "\n ---------- PRACOWNIK BIBLIOTEKI -------";
	cout << "\n\n Wpisz login: ";
	cin >> admin_login;
	cout << "\n Wpisz haslo:";
	cin >> admin_haslo;

	if (admin_login == "root" && admin_haslo == "root")
	{
		menuPracownika();			//PANEL STEROWANIA DLA  PRACOWNIKA BIBLIOTEKI
	}
	else
	{
		cout << "\n\n Blad.  Nacisnij jakikolwiek przycisk, aby kontynuowac..";
		getchar(); getchar();
	}
}

void Pracownik_biblioteki::menuPracownika()
{
	System s;
	Ksiazka ksiazka;
	Wypozyczenie wypozyczenie;
	Zwrot zwrot;
	Baza_ksiazek baza;
	Raport raport;

	char x;

	cout << "\n\n Zalogowanie na konto pracownika powiodlo sie!! Nacisnij jakikolwiek przycisk, aby kontynuowac..";
	getchar();
	getchar();
	system("cls");

	int choice = 0;
	while (choice != 7)
	{
		cout << "\n1. Dodaj ksiazke";
		cout << "\n2. Usun ksiazke";
		cout << "\n3. Wyswietl wszystkie ksiazki";
		cout << "\n4. Wypozycz";
		cout << "\n5. Zwroc";
		cout << "\n6. Utworz raport";
		cout << "\n7. Zakoncz prace";
		cout << "\n\n Wpisz swoj wybor : ";

		cin >> choice;
		switch (choice)
		{
		case 1:
			do {
				baza.dodajKsiazke();
				cout << "\n\nCzy chcesz dodac kolejna ksiazke?" << "(y/n) : ";
				cin >> x;
			} while (x == 'y');
			break;

		case 2: baza.usunKsiazke(); break;
		case 3: baza.szukaj(); break;
		case 4:
			cout << "ZESKANUJ KSIAZKE." << endl;
			system("pause");
			wypozyczenie.zeskanujKsiazke();
			break;
		case 5:
			cout << "ZESKANUJ KSIAZKE." << endl;
			if (ksiazka.kara = true)
				zwrot.oplata();
			else
				cout << "ZWROT PRZEBIEGL POMYSLNIE." << endl;
			break;
		case 6:
			raport.utworzRaport();
			break;
		case 7: exit(0); break;

		default:
		{
			cout << "\n\nZly wybor.  Nacisnij jakikolwiek przycisk, aby kontynuowac..";
			getchar();
		}
		}
		system("cls");
	}
}
