/*
 * petle_cw1.cpp
 */

#include <iostream>
using namespace std;

int main(int argc, char **argv)
{   
    int i;
    int suma = 0;
    for(i = 10; i < 100; i++)
        if(i%2 == 0)
        suma += i;
    cout << "Suma dwucyfrowych liczb parzystych to: " << suma << endl;
    return 0;
}

