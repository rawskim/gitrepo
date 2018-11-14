/*
 * palindrom.cpp
 */

#include <iostream>
#include <string.h>

using namespace std;


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
    int roz = 20;
    char wyraz[roz];
    cout << "Podaj wyraz: ";
    cin.getline(wyraz, roz);
    if (palindrom(wyraz, strlen(roz)))
        cout << "Palindrom!";
    else
        cout << "Nie palindrom";
    return 0;
}

