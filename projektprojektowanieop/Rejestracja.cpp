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

void Rejestracja::utworzenieKonta(int karta, string haslo)
{

	int id_karty = karta;
	string _haslo= haslo;

	cout << endl << endl << endl;
	cout << "\t\tPOMYSLNIE ZAREJESTROWANO. NA TWOJEGO MAILA WYSLANO POTWIERDZENIE." << endl << endl;
	cout << "\t\t\t\tSPROBUJ SIE ZALOGOWAC." << endl << endl;

	system("pause");

	logowanie.wprowadzenieDanych(id_karty, _haslo);
	
}

void Rejestracja::utworzenieHasla()
{
	cout << "Wpisz haslo, ktore zawiera do 8 znakow:";
	cin >> nowy_uzytkownik.haslo;

	string _haslo= nowy_uzytkownik.haslo;
	
	if(_haslo.length()>8)
	{
		cout << "Za duzo znakow!";
		utworzenieHasla();
	}
	else
	{
		nadanieId(_haslo);
	}
}

void Rejestracja::uzupelnienieDanych()
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
	utworzenieHasla();

}

void Rejestracja::nadanieId(string haslo_)
{
	srand(time(NULL));
	int liczba = (rand() % 1200) + 128;
	
	cout << "Twoje id:" << endl << liczba;

	nowy_uzytkownik.id_karty = liczba;

	string haslo_nowe = haslo_;
	int kod = liczba;

	utworzenieKonta(kod, haslo_nowe);
	
}