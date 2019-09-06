/*
 * wej-wyj.cpp
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    char imie[20];
    char nazwisko[20];
    
    cout << "Podaj imię: ";
    cin >> imie;
    cout << "Podaj nazwisko: ";
    cin >> nazwisko;
    cout  << "Witaj " << imie << nazwisko << endl;
    
    return 0;
}

