#include <exception>
using namespace std;

class Bibliotekarz;
class Ksiazka;
class Wypo�yczenie;
class Zwrot;

class Zwrot
{
public: Bibliotekarz* _unnamed_Bibliotekarz_;
public: Ksiazka* _unnamed_Ksi��ka_;

public: void oplata();
};
