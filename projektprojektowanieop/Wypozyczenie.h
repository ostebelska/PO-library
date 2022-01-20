#include <exception>
using namespace std;


class Uzytkownik;
class Bibliotekarz;
class Ksiazka;
class Rezerwacja;
class Wypo¿yczenie;

class Wypo¿yczenie
{
private: int _numer_wypozyczenia;
private: int _id_karty;
public: Uzytkownik* _unnamed_U¿ytkownik_;
public: Bibliotekarz* _unnamed_Bibliotekarz_;
public: Ksiazka* _unnamed_Ksi¹¿ka_;
public: Rezerwacja* _unnamed_Rezerwacja_;

public: void zeskanuj_ksiazke();

public: void szukaj_ksi¹¿ki();
};