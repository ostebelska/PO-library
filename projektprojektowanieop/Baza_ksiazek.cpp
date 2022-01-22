#include <iostream>
#include<fstream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

#include "Baza_ksiazek.h"

void Baza_ksiazek::dodaj_ksiazke()
{
    system("cls");
    fstream file;
    int no_copy;
    string b_name, a_name;
    int b_id;

    cout << "\n\n\t\t\t\tDODAJ KSIAZKE:";
    cout << "\n\nID KSIAZKI: ";
    cin >> b_id;
    cout << "\nTYTUL : ";
    cin >> b_name;
    cout << "\nNAZWISKO AUTORA : ";
    cin >> a_name;
    cout << "\nNR: ";
    cin >> no_copy;

    // Open file in append or
    // output mode
    file.open("ksiazki.txt", ios::out | ios::app);
    file << " " << b_id << " " << b_name << " " << a_name << " " << no_copy << "\n";
    file.close();

    Ksiazka* ksiazka(int b_id, string b_name, string a_name, int no_copy);
}

void Baza_ksiazek::usun_ksiazke()
{
    system("cls");
    fstream file, file1;
    int no_copy, count = 0;
    string b_id, b_idd, b_name, a_name;
    cout << "\n\n\t\t\t\tUsun ksiazke";

    // Append file in output mode
    file1.open("ksiazki.txt", ios::app | ios::out);
    file.open("ksiazki.txt", ios::in);

    if (!file)
        cout << "\n\nProblem z otwarciem pliku...";
    else {

        cout << "\n\nID KSIAZKI: ";
        cin >> b_id;
        file >> b_idd >> b_name;
        file >> a_name >> no_copy;
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
                << " " << no_copy
                << "\n\n";
            file >> b_idd >> b_name;
            file >> a_name >> no_copy;
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
    rename("ksiazki.txt", "ksiazki2.txt");
}

void Baza_ksiazek::szukaj()
{
    system("cls");
    fstream file;
    int no_copy;
    string b_name, b_id, a_name;
    cout << "\n\n\t\t\t\t\tWSZYSTKIE KSIAZKI";

    // Open the file in input mode
    file.open("ksiazki.txt", ios::in);

    if (!file)
        cout << "\n\nBlad!!";
    else
    {
        cout << "\n\n\nID ksiazki\tKsiazka" << "\tAutor\tNumer ksiazki \n\n";
        file >> b_id >> b_name;
        file >> a_name >> no_copy;

        while (!file.eof())
        {
            cout << "  " << b_id << "\t\t" << b_name
                << "\t\t" << a_name << "\t\t" << no_copy
                << "\n\n";
            file >> b_id >> b_name;
            file >> a_name >> no_copy;
        }

        system("pause");
        file.close();
    }
}

void Baza_ksiazek::wyswietl_szukane()
{
    system("cls");
    fstream file;
    int no_copy, count = 0;
    string b_id, b_name, a_name, b_idd;

    cout << "\n\n\t\t\t\tWyszukaj konkretnej pozycji:";

    // Open the file in input mode
    file.open("ksiazki.txt", ios::in);

    if (!file)
        cout << "\n\nBlad!!";
    else
    {
        cout << "\n\nTYTUL KSIAZKI: ";
        cin >> b_idd;
        file >> b_id >> b_name;
        file >> a_name >> no_copy;

        while (!file.eof())
        {
            if (b_idd == b_name)
            {
                system("cls");
                cout << "\n\n\t\t\tWYSZUKANA POZYCJA:";
                cout << "\n\nID : " << b_id;
                cout << "\nTytul : " << b_name;
                cout << "\nAutor : " << a_name;
                cout << "\nNumer : " << no_copy;
                cout << endl << endl;
                count++;
                break;
            }
            file >> b_id >> b_name;
            file >> a_name >> no_copy;
        }
        system("pause");
        file.close();

        if (count == 0)
            cout << "\n\nNie znaleziono ksiazki...";
    }
}
