/*
 * palindrom.cpp
 */
 
#include <iostream>
#include <string.h>

using namespace std;

int zlicz(char tab[]) {
    int i = 0;
    while(tab[i] != '\0') i++;
    return i;
}

bool palindrom(char tab[], int roz) {
    bool czyPal = true;
    for (int i = 0; i < roz / 2; i++) {
        if (tab[i] == tab[roz-1-i])
            ; // instrukcja pusta
        else {
            czyPal=false;
            break;
        }
    }
    return czyPal;
}

int main(int argc, char **argv)
{
    const int rozmiar = 20;  // deklaracja stałej
    char tekst[rozmiar];  // deklaracja tablicy znakowej
    cout << "Podaj wyraz:\n";
    cin.getline(tekst, rozmiar);
    // cin.gcount()-1
    if (palindrom(tekst, strlen(tekst)))
        cout << "Palindrom!";
    else
        cout << "The thing";
    return 0;
}
