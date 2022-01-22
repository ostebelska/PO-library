#include <exception>
#include <string>
#include <iostream>
#include"Uzytkownik.h"
#include"Rejestracja.h"

#ifndef LOGOWANIE_H
#define LOGOWANIE_H
using namespace std;

class Uzytkownik;
class System;
class Logowanie;

class Logowanie
{
public:
	Uzytkownik uzytkownik;

	void wprowadzenie_danych(int, string);

};

#endif
