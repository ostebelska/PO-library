#include <exception>
using namespace std;


class Uzytkownik;
class Bibliotekarz;
class Ksiazka;
class Rezerwacja;
class Wypozyczenie;

class Wypo¿yczenie
{
private: int _numer_wypozyczenia;
private: int _id_karty;
public: Uzytkownik* _unnamed_Uzytkownik_;
public: Uzytkownik* _unnamed_Użytkownik_;
public: Bibliotekarz* _unnamed_Bibliotekarz_;
public: Ksiazka* _unnamed_Ksiazka_;
public: Ksiazka* _unnamed_Książka_;
public: Rezerwacja* _unnamed_Rezerwacja_;

public: void zeskanuj_ksiazke();

public: void szukaj_ksiazki();
};
