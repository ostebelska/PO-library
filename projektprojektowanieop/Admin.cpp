#include <exception>
#include <vector>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#include "Admin.h"

void Admin::dodaj_ksiazke()
{
    system("cls");
    fstream file;
    int no_copy;
    string b_name, a_name, b_id;
    cout << "\n\n\t\t\t\tADD BOOKS";
    cout << "\n\nBook ID : ";
    cin >> b_id;
    cout << "\nBook Name : ";
    cin >> b_name;
    cout << "\nAuthor Name : ";
    cin >> a_name;
    cout << "\nNo. of Books : ";
    cin >> no_copy;

    // Open file in append or
    // output mode
    file.open("txt.txt",
        ios::out | ios::app);
    file << " " << b_id << " "
        << b_name << " " << a_name
        << " " << no_copy << "\n";
    file.close();
}

void Admin::usun_ksiazke() {
    throw "Not yet implemented";
}
