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
#include"Logowanie.h"

void Rejestracja::sprawdzenie_has³a()
{
	throw "Not yet implemented";
}

void Rejestracja::utworzenie_konta(int karta, string haslo)
{

	int id_karty = karta;
	string _haslo= haslo;

	cout << endl << endl;
	cout << "\n\t\t\t\tPOMYSLNIE ZAREJESTROWANO. NA TWOJEGO MAILA WYSLANO POTWIERDZENIE." << endl;
	cout << "\n\t\t\t\tSPROBUJ SIE ZALOGOWAC.";

	logowanie.wprowadzenie_danych(id_karty, _haslo);


}

void Rejestracja::utworzenie_has³a()
{
	int dl_hasla;
	cout << "Wpisz haslo, ktore zawiera do 8 znakow:";
	cin >> nowy_uzytkownik.haslo;

	string _haslo= nowy_uzytkownik.haslo;
	
	if(_haslo.length()>8)
	{
		cout << "Za duzo znakow!";
		utworzenie_has³a();
	}
	else
	{
		nadanie_id();
	}

}

void Rejestracja::uzupe³nienie_danych()
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
	utworzenie_has³a();

}

void Rejestracja::nadanie_id()
{
	srand(time(NULL));
	int liczba = (rand() % 1200) + 128;
	
	cout << "Twoje id:" << endl << liczba;

	nowy_uzytkownik.id_karty = liczba;

	nowy_uzytkownik.haslo == haslo_nowe;
	nowy_uzytkownik.id_karty = kod;

	utworzenie_konta(kod, haslo_nowe);
	
}