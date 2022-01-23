#include <exception>
#include <iostream>
#include <fstream>
using namespace std;

#include"Raport.h"

void Raport::utworzRaport()
{
	fstream plik;
	string tresc_raportu;

	cout << "Podaj tresc raportu: " << endl;
	cin >> tresc_raportu;

	plik.open("raport.txt", ios::out | ios::app);
	plik << tresc_raportu << "\n";
	plik.close();

	cout << endl;
	cout << "Raport zostal dodany." << endl;
	getchar();
	getchar();

}