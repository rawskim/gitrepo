/*
 * sortowanie.cpp
 */


#include <iostream>
using namespace std;

void wypelnij_los(int tab[], int roz) {
    srand(time(NULL));  // inicjacja generatora liczb pseudolosowych
    for(int i = 0; i < roz; i++) {
        tab[i] = rand() % 101;
    }
}

void drukuj(int tab[], int roz) {
    for(int i = 0; i < roz; i++) {
        cout << tab[i] << " ";
    }
}

void zamien(int &a, int &b) {
    int tmp = a;  // zmienna pomocnicza
    a = b;
    b = tmp;
}

void zamien2(int tab[], int i) {
    int tmp = tab[i];
    tab[i] = tab[i+1];
    tab[i+1] = tmp;
}

void sort_bubble(int tab[], int n) {
    cout << "\nSortowanie bąbelkowe\n";
    int licznik = 0;
    for (int j = n - 1; j > 0 ; j--) {
        for(int i = 0; i < j; i++) {
            licznik++;
            if (tab[i] > tab[i+1])
                //zamien(tab[i], tab[i+1]);
                zamien2(tab, i);
        }
    }
    cout << "\nPowtórzeń: " << licznik << endl;
}

void sort_insert(int tab[], int n) {
    cout << "\nSortowanie przez wstawianie\n";
    int i, j, tmp;
    for (i = 1; i < n; i++) { // pętla wybiera kolejne elementy zaczynając od drugiego
        tmp = tab[i];
        j = i - 1; // 0
        while (j >= 0 && tab[j] > tmp) {
            tab[j+1] = tab[j];
            j--;
        }
        tab[j+1] = tmp;
    }
}

int main(int argc, char **argv)
{
    int roz = 20;
    int tab[roz];
    wypelnij_los(tab, roz);
    drukuj(tab, roz);
    //int a = 10;
    //int b = 20;
    //zamien(a, b);
    //cout << a << " " << b;
    cout << endl;
    sort_insert(tab, roz);
    drukuj(tab, roz);
    return 0;
}