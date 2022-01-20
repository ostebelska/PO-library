#include <exception>
using namespace std;


class U¿ytkownik;
class Bibliotekarz;
class Ksi¹¿ka;
class Rezerwacja;
class Wypo¿yczenie;

class Wypo¿yczenie
{
private: int _numer_wypozyczenia;
private: int _id_karty;
public: U¿ytkownik* _unnamed_U¿ytkownik_;
public: Bibliotekarz* _unnamed_Bibliotekarz_;
public: Ksi¹¿ka* _unnamed_Ksi¹¿ka_;
public: Rezerwacja* _unnamed_Rezerwacja_;

public: void zeskanuj_ksiazke();

public: void szukaj_ksi¹¿ki();
};