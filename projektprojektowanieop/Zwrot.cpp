#include <exception>
#include <iostream>
using namespace std;

#include "Zwrot.h"

void Zwrot::oplata()
{
	char x;
	cout << "Uregulowano oplate? y/n" << endl;
	cin >> x;

	if (x == 'y')
	{
		cout << "Operacja zwrotu przebiegla pomyslnie." << endl;
		getchar();
		getchar();
	}
	else
	{
		cout << "Prosze uregulowac oplate.";
		getchar();
		getchar();
	}
}
