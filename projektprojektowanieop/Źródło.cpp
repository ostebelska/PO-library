#include <iostream>
#include <string.h>
#include <stdio.h>
#include <time.h>
#include <fstream>
#include <exception>
#include "Baza_ksiazek.h"

using namespace std;


class Ksi¹¿ka;
class Baza_ksi¹¿ek;
class logowanie;
class Rezerwacja;
class Wypo¿yczenie;
class system_;
class U¿ytkownik;
class logowanie;
class Admin;
class rejestracja;

/*
bool passwords()
{
	int i = 0;
	char ch, st[21], ch1[21] = { "0000" };
	cout << "\n\n\t\tEnter Password : ";
	while (1)
	{
		ch = getchar();
		if (ch == 13)
		{
			st[i] = '\0';
			break;
		}
		else if (ch == 8 && i > 0)
		{
			i--;
			cout << "\b \b";
		}
		else
		{
			cout << "*";
			st[i] = ch;
			i++;
		}
	}
	for (i = 0; st[i] == ch1[i] && st[i] != '\0' && ch1[i] != '\0'; i++);
	if (st[i] == '\0' && ch1[i] == '\0')
		return 1;
	else
		return 0;
}
*/
int main()
{
	string adminUser;
	string adminPassword;
	Baza_ksi¹¿ek b;
	char x;


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
		logowanie l();

	case 2:
		rejestracja r();
	case 3:
		//menu administratora/ pracownika biblioteki

		cout << "\n ---------- Admin Login -------";
		cout << "\n\n Enter username: ";
		cin >> adminUser;
		cout << "\n Enter password:";
		cin >> adminPassword;

		if (adminUser == "root" && adminPassword == "root")
		{
			int choice = 0;
			while (choice != 9)
			{
				cout << "\n\n Zalogowanie na konto pracownika powiodlo sie!! Nacisnij jakikolwiek przycisk, aby kontynuowac..";
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
	case 4:
		b.wyswietl_szukane();

	case 5:
		exit(0);
		}
	}
}