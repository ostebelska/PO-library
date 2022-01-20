#include <exception>
#include <string>
#include <iostream>
using namespace std;

class Uzytkownik;
class System;
class Logowanie;

class Logowanie
{
public:
	Uzytkownik* Uzytkownik;
	//system_* _unnamed_system__;

	void wprowadzenie_danych();

};