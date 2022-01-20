#include <exception>
using namespace std;


class Pracownik_biblioteki;
class system_;
class Raport;

class Raport
{
public: Pracownik_biblioteki* _inicjuje;
public: system_* _system_;

public: void utworz_raport();
};
