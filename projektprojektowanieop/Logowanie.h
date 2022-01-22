#include <exception>
#include <string>
#include <iostream>
#include"Uzytkownik.h"
#ifndef LOGOWANIE_H
#define LOGOWANIE_H
using namespace std;

class Uzytkownik;
class System;
class Logowanie;

class Logowanie
{
public:
	Uzytkownik Uzytkownik;

	void wprowadzenie_danych();

};

#endif
