/*
 * petle_cw2.cpp
 */


#include <iostream>
using namespace std;

void calkowite(){
    int a, b, c;
    cout << "Podaj liczbę całkowitą: " << endl;
    cin >> a;
    cout << "Podaj liczbę całkowitą: " << endl;
    cin >> b;
    cout << "Podaj liczbę całkowitą: " << endl;
    cin >> c;
    while (a+b!=c){
        a = b;
        b = c;
        cin >> c;
    }
    cout << "Liczba " << c << " jest suma dwóch poprzednich liczb" << endl;
}

int main(int argc, char **argv)
{
    calkowite();
    return 0;
}

