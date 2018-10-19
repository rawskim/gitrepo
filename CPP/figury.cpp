/*
 * figury.cpp
 */


#include <iostream>

using namespace std;

void prostokat2(int a, int b, char znak)
{
    for (int i = 0; i < a; i++){
        for (int j = 0; j < b; j++)
            if (j == 0 || j == b-1 || i == 0 || i == a-1)
                cout << znak;
            else
                cout << " ";
        cout << endl;
    }
}




int main(int argc, char **argv)
{
    int  a, b; // deklaracja
    a = b = 0;
    cout << "Podaj bok I: ";
    cin >> a;
    cout << "Podaj bok II: ";
    cin >> b;
    
    char znak;
    cout << "Podaj znak wypełnienia :";
    cin >> znak;
    
    prostokat2(a, b, znak);
    
	
	return 0;
}
