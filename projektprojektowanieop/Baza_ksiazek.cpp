#include <iostream>
#include<fstream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

#include "Baza_ksiazek.h"
#include "Ksiazka.h"

void Baza_ksiazek::dodajKsiazke()
{
    system("cls");
    fstream file;
    string w_name;
    string b_name, a_name;
    int b_id;
    bool status = true;

    cout << "\n\n\t\t\t\tDODAJ KSIAZKE:";
    cout << "\n\nID KSIAZKI: ";
    cin >> b_id;
    cout << "\nTYTUL : ";
    cin >> b_name;
    cout << "\nNAZWISKO AUTORA : ";
    cin >> a_name;
    cout << "\nWYDAWNICTWO: ";
    cin >> w_name;

    // Open file in append or
    // output mode
    file.open("ksiazki.txt", ios::out | ios::app);
    file << " " << b_id << " " << b_name << " " << a_name << " " << w_name <<status<< "\n";
    file.close();

    Ksiazka ksiazka(int b_id, string b_name, string a_name, int no_copy, bool status);

}

void Baza_ksiazek::usunKsiazke()
{
    system("cls");
    fstream file, file1;
    int count = 0;
    string b_id, b_idd, b_name, a_name, w_name;
    cout << "\n\n\t\t\t\tUsun ksiazke";

    // Append file in output mode
    file1.open("ksiazki1.txt", ios::app | ios::out);
    file.open("ksiazki.txt", ios::in);

    if (!file)
        cout << "\n\nProblem z otwarciem pliku...";
    else {

        cout << "\n\nID KSIAZKI: ";
        cin >> b_id;
        file >> b_idd >> b_name;
        file >> a_name >> w_name;
        while (!file.eof())
        {

            if (b_id == b_idd)
            {

                system("cls");
                cout << "\n\n\t\t\t\t"
                    << "USUN KSIAZKE";
                cout << "\n\nKSIAZKA ZOSTALA POMYSLNIE USUNIETA... " << endl << endl;
                count++;
            }
            else
                file1 << " " << b_idd
                << " " << b_name
                << " " << a_name
                << " " << w_name
                << "\n\n";
            file >> b_idd >> b_name;
            file >> a_name >> w_name;
        }
        if (count == 0)
            cout << "\n\nID NIE ODNALEZIONO. "
            << "Not Found...";
    }
    system("pause");

    // Close the file
    file.close();
    file1.close();
    remove("ksiazki.txt");
    rename("ksiazki1.txt", "ksiazki.txt");
}

void Baza_ksiazek::szukaj()
{
    system("cls");
    fstream file;
    string b_name, b_id, a_name, w_name;
    cout << "\n\n\t\t\t\t\tWSZYSTKIE KSIAZKI";

    // Open the file in input mode
    file.open("ksiazki.txt", ios::in);

    if (!file)
        cout << "\n\nBlad!!";
    else
    {
        cout << "\n\n\nID ksiazki\tKsiazka" << "\t\tAutor\t\tWydawnictwo \n\n";
        file >> b_id >> b_name;
        file >> a_name >> w_name;

        while (!file.eof())
        {
            cout << "  " << b_id << "\t\t" << b_name
                << "\t\t" << a_name << "\t\t" << w_name
                << "\n\n";
            file >> b_id >> b_name;
            file >> a_name >> w_name;
        }

        system("pause");
        file.close();
    }
}

void Baza_ksiazek::wyswietlSzukane()
{
    system("cls");
    fstream file;
    int count = 0;
    string b_id, b_name, a_name, b_idd, w_name;

    cout << "\n\n\t\t\t\tWyszukaj konkretnej pozycji:";

    file.open("ksiazki.txt", ios::in);

    if (!file)
        cout << "\n\nBlad!!";
    else
    {
        cout << "\n\nTYTUL KSIAZKI LUB AUTOR: ";
        cin >> b_idd;

        file >> b_id >> b_name;
        file >> a_name >> w_name;

        while (!file.eof())
        {
            if (b_idd == b_name || b_idd == a_name)
            {
                system("cls");
                cout << "\n\n\t\t\tWYSZUKANA POZYCJA:";
                cout << "\n\nID : " << b_id;
                cout << "\nTytul : " << b_name;
                cout << "\nAutor : " << a_name;
                cout << "\nWydawnictwo : " << w_name;
                cout << endl << endl;

                count++;
                break;
            }
            file >> b_id >> b_name;
            file >> a_name >> w_name;
        }
        file.close();

        if (count == 0)
            cout << "\n\nNIE ZNALEZIONO POZYCJI..." << endl << endl;
    }
}
