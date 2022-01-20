#include <exception>
using namespace std;


class Pracownik_biblioteki;
class System;
class Raport;

class Raport
{
public: Pracownik_biblioteki* _inicjuje;
public: System* _system_;

public: void utworz_raport();
};
