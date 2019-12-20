/*
 * typ_danych.cpp
 */


#include <iostream>


using namespace std;

// typ wyliczeniowy
enum REZULTAT {
    ISTNIEJE = 1, 
    NIEISTNIEJE = -1,
};

REZULTAT czyjest(const char *npliku) {
    ifstream f(npliku);
    if (f.good){
        f.close();
        return ISTNIEJE;
    } else {
        f.close();
        return NIEISTNIEJE;
    }
}

#define ROZMIAR 20

void testtyp() {
    char plik[ROZMIAR];
    cout << "Podaj nazwę pliku: ";
    cin >> pliki;
}


int main(int argc, char **argv)
{
	
	return 0;
}
