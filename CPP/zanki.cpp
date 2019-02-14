/*
 * znaki.cpp
 */


#include <iostream>

using namespace std;

void licz_znaki(char tab[]) {
    int i = 0;
    int biale, inter, licz;
    biale = inter = licz = 0;
    while(tab[i] != '\0') {
        //~if (tab[i] == ' ' || tab[i] == '\t')
            //~biale++;
        //~else
            //~cout << tab[i];
        switch (tab[i]) {
            case ' ': biale++; break;
            case '\t': biale++; break;
            case ',': inter++; break;
            case '.': inter++; break;
            default: licz++; break;
        }
        i++; // zwiększanie indeksu
    }
    cout << "\nZnaków białych: " << biale << endl;
    cout << "\nInterpunkcyjne: " << inter << endl;
    cout << "\nReszta: " << licz << endl;
}

void ascii(char tab[]) {
    int i = 0;
    while(tab[i] != '\0') {
        cout << (int)tab[i] << " ";
        i++;
    }
}

// A-Z ASCII 65-90, a-z ASCII 97-122
void zamiana_liter(char tab[]) {
    int i = 0;
    int kod;
    while(tab[i] != '\0') {
        kod = (int)tab[i];
        if (kod >= 65 && kod <= 90)
            kod += 32;
        else if (kod >= 97 && kod <= 122)
            kod -= 32;
        cout <<(char)kod;
        i++;
    }
}

int main(int argc, char **argv)
{
    const int rozmiar = 20;  // deklaracja stałej
    char znaki[rozmiar];  // deklaracja tablicy znakowej
    cout << "Jak się nazywasz?\n";
    cin.getline(znaki, rozmiar);
    // cout << "Cześć " << znaki << endl;
    // licz_znaki(znaki);
    // ascii(znaki);
    zamiana_liter(znaki);
    return 0;
}
