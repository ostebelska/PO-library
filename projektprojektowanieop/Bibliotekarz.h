#include <exception>
#include <vector>
using namespace std;

class Ksiazka;
class Rezerwacja;
class Wypo퓓czenie;
class Zwrot;
class Pracownik_biblioteki;
class Bibliotekarz;

class Bibliotekarz
{
public: std::vector<Ksiazka*> _wydaje_przyjmuje;
public: Rezerwacja* _unnamed_Rezerwacja_;
public: Wypo퓓czenie* _unnamed_Wypo퓓czenie_;
public: Zwrot* _unnamed_Zwrot_;

public: void wypozycz();

public: void zwroc();

public: void sprawdz_rezerwacje();

public: void ureguluj_kare();

public: void szukaj_u퓓tkownika();
};