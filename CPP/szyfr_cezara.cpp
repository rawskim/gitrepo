/*
 * szyfr_cezara.cpp
 */

#include <iostream>
using namespace std;

#define MAKS 100

void szyfruj(int klucz, char tekst[], int ilosc) {
    klucz = klucz % 20;
    for(int i = 0; i < ilosc; i++){
    cout << tekst[i];
    tekst[i] = tekst[i+1];
    }
}

int main(int argc, char **argv)
{
    char tekst [MAKS];
    int klucz = 0;
    
    cout << "Podaj tekst:\n"
    cin.getline(tekst, MAKS);
    cout << "Podaj klucz: ";
    cin >> klucz;
    szyfruj(klucz, tekst, ilosc);
    return 0;
}

