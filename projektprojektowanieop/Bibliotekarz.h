#include <exception>
#include <vector>
using namespace std;

class Ksi¹¿ka;
class Rezerwacja;
class Wypo¿yczenie;
class Zwrot;
class Pracownik_biblioteki;
class Bibliotekarz;

class Bibliotekarz
{
public: std::vector<Ksi¹¿ka*> _wydaje_przyjmuje;
public: Rezerwacja* _unnamed_Rezerwacja_;
public: Wypo¿yczenie* _unnamed_Wypo¿yczenie_;
public: Zwrot* _unnamed_Zwrot_;

public: void wypozycz();

public: void zwroc();

public: void sprawdz_rezerwacje();

public: void ureguluj_kare();

public: void szukaj_u¿ytkownika();
};