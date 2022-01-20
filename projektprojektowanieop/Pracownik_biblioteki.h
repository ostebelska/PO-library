#include <exception>
#include <string>
using namespace std;

class Baza_ksiazek;
class System;
class Raport;

class Pracownik_biblioteki
{
public:
	string _imie;
	string _nazwisko;
	string _login;
	string _haslo;

public:
	bool logowanie();

public: void raport();
};