#include <iostream>
#include<fstream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

class Admin;
class Pracownik_biblioteki;
class Ksiazka;
class system_;
class Baza_ksi��ek;

class Baza_ksi��ek
{
public:
    //int _ksiazka;
    //Admin* _dodaje_usuwa;
    //Ksiazka* ksiazka;

    Baza_ksi��ek() {};

    void dodaj_ksiazke();
    void usun_ksiazke();
    void szukaj();
    void wyswietl_szukane();
};
