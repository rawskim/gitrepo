/*
 * silnia.cpp
 */


#include <iostream>
using namespace std;

int silnia_it(int a) {
    int wynik = 1;
    for(int i=1; i<a; i++) {
        wynik = a * (a-1);
        }
    return wynik;
}


// silnia_rek(5)
// silnia_rek(4) * 5
// silnia_rek(3) * 4 
// silnia_rek(2) * 3
// silnia_rek(1) * 2
// silnia_rek(0) * 1
// 1
// 1 * 1
// 1 * 2
// 2 * 3
// 6 * 4
// 24 * 5
// 120
int silnia_rek(int a) {
    if(a == 1)
        return 1;
    return a * silnia_rek(a-1);
}

int main(int argc, char **argv)
{
    int a;
    cout << "Podaj liczbę: ";
    cin >> a;
    cout << "Silnia: " << silnia_it(a) << endl;
    cout << "Silnia: " << silnia_rek(a) << endl;
    return 0;
}

