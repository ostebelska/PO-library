#include <exception>
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <time.h>
#include <string>
#include<fstream>

using namespace std;
#include "System.h"
#include "Rejestracja.h"
#include "Uzytkownik.h"

void Rejestracja::sprawdzenie_has�a()
{
	throw "Not yet implemented";
}

void Rejestracja::utworzenie_konta()
{
	nowy_uzytkownik.haslo == uzytkownik.haslo;
	nowy_uzytkownik.id_karty = uzytkownik.id_karty;
	fstream file;
	file.open("uzytkownicy.txt", ios::out | ios::app);
	file << " " << nowy_uzytkownik.nazwisko<< " " << uzytkownik.id_karty << " " << nowy_uzytkownik.mail<<endl;
	file.close();
	
	cout << endl << endl;
	cout << "Utworzono konto!";
}

void Rejestracja::utworzenie_has�a()
{
	int dl_hasla;
	cout << "Wpisz haslo, ktore zawiera do 8 znakow:";
	cin >> nowy_uzytkownik.haslo;

	string _haslo= nowy_uzytkownik.haslo;
	
	if(_haslo.length()>8)
	{
		cout << "Za duzo znakow!";
		utworzenie_has�a();
	}
	else
	{
		nadanie_id();
	}

}

void Rejestracja::uzupe�nienie_danych()
{
	cout << "Uzupelnij dane:" << endl;
	cout << "Podaj imie:" << endl;
	cin >> nowy_uzytkownik.imie;
	cout << "Podaj nazwisko:" << endl;
	cin >> nowy_uzytkownik.nazwisko;
	cout << "Podaj date urodzenia:" << endl;
	cin >> nowy_uzytkownik.data_uro;
	cout << "Podaj mail:" << endl;
	cin >> nowy_uzytkownik.mail;

	//system.sprawdzenie_danych();
	utworzenie_has�a();

}

void Rejestracja::nadanie_id()
{
	srand(time(NULL));
	int liczba = (rand() % 1200) + 128;
	
	cout << "Twoje id:" << endl << liczba;

	nowy_uzytkownik.id_karty = liczba;

	utworzenie_konta();
	
}