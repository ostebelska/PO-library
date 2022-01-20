#include <exception>
using namespace std;

class Bibliotekarz;
class Ksiazka;
class Wypozyczenie;
class Zwrot;

class Zwrot
{
public: Bibliotekarz* _unnamed_Bibliotekarz_;
public: Ksiazka* _unnamed_Ksiazka_;

public: void oplata();
};
