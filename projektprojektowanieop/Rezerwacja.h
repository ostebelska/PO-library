#include <exception>
#include <string>
using namespace std;

class U¿ytkownik;
class Ksi¹¿ka;
class Bibliotekarz;
class Wypo¿yczenie;
class Rezerwacja;

class Rezerwacja
{
private: string _ksi¹¿ka;
private: string _data_waznosci;
private: int _numer_rezerwacji;
public: U¿ytkownik* _unnamed_U¿ytkownik_;
public: Ksi¹¿ka* _unnamed_Ksi¹¿ka_;
public: Bibliotekarz* _unnamed_Bibliotekarz_;
public: Wypo¿yczenie* _unnamed_Wypo¿yczenie_;

public: void sprawdz_rezerwacje();

public: void zarezerwuj();

public: void operation();
};