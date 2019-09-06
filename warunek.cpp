/*
 * warunek.cpp
 * 
 */


#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    float a, b, c;
    a = b = c = 0;
    
    cout << "Podaj pierwszą liczbę: ";
    cin >> a;
    cout << a << endl;

    cout << "Podaj drugą liczbę: ";
    cin >> b;
    cout << b << endl;

    cout << "Podaj trzecią liczbę: ";
    cin >> c;
    cout << c << endl;
    
    if ((a > b) && (a > c)) {
        cout <<"Największą liczbą jest: " << a;
    }
    else if ((b > c) && (b > a)) {
        cout <<"Największą liczbą jest: " << b;
    }
    else {
        cout <<"Największą liczbą jest: " << c;
    }
    return 0;
}

