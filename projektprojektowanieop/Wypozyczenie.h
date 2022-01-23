#include <exception>
using namespace std;

class Uzytkownik;
class Bibliotekarz;
class Ksiazka;
class Rezerwacja;

class Wypozyczenie
{
private: int _numer_wypozyczenia;
private: int _id_karty;

public: void zeskanujKsiazke();
};
