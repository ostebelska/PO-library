#include <iostream>
#include<fstream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

class Admin;
class Pracownik_biblioteki;
class Ksiazka;
class System;
class Baza_ksiazek;

class Baza_ksiazek
{
public:
    //int _ksiazka;
    //Admin* _dodaje_usuwa;
    //Ksiazka* ksiazka;

    Baza_ksiazek() {};

    void dodaj_ksiazke();
    void usun_ksiazke();
    void szukaj();
    void wyswietl_szukane();
};
