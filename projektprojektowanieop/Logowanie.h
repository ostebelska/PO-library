#include <exception>
#include <string>
#include <iostream>
using namespace std;

class Użytkownik;
class system_;
class logowanie;

class logowanie
{
public:
	Użytkownik* Uzytkownik;
	//system_* _unnamed_system__;

	void wprowadzenie_danych();

};