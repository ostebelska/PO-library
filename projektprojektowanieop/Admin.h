#include <exception>
#include <vector>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


class Ksiazka;
class Baza_ksiazek;
class Pracownik_biblioteki;

class Admin
{

public:
    string id;
    string haslo;

    //Admin(); //(string id, string haslo)
    //{
      //  this->id == id;
        //this->haslo == haslo;
  //  }

public: void dodaj_ksiazke();

public: void usun_ksiazke();
};
