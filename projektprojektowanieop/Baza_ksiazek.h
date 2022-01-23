#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#ifndef BAZA_KSIAZEK_H
#define BAZA_KSIAZEK_H
using namespace std;

class Admin;
class Pracownik_biblioteki;
class Ksiazka;
class system_;
class Baza_ksiazek;
class System;
class Baza_ksiazek;

class Baza_ksiazek
{
public:

    Baza_ksiazek() {};

    void dodajKsiazke();
    void usunKsiazke();
    void szukaj();
    void wyswietlSzukane();
};
#endif
