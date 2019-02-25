/*
 * szyfr_cezara.cpp
 */

#include <iostream>
#include <string.h> // strlen()

using namespace std;

#define MAKS 100

void deszyfruj(char tb[], int klucz){
    klucz = klucz % 26;
    int i = 0;
    int kod = 0;
    while (tb[i] != '\0') {
        ;
    }
}

void szyfruj(char tb[], int klucz){
    int ile = strlen(tb);
    ala ma kota
    ala
     ma
     ko
    ta.
    a  tllmkaaaao.
    ile znaków uzupełnić kropkami
    uzupełnić tekst kropkami
    ...
}


int main(int argc, char **argv)
{
    char tekst[MAKS];
    int klucz = 0;

    cout << "Podaj tekst:\n";
    cin.getline(tekst, MAKS);
    cout << "Podaj klucz: ";
    cin >> klucz;
    szyfruj(tekst, klucz);

    return 0;
}
