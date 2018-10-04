#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  suma_cyfr.py
#  Napisz program który sumuje cyfry podanej liczby (minimum dwucyfrowej) i wyświetla ich sumę w terminalu

def sumuj_cyfry1(liczba):
    suma = 0
    while liczba > 0:
        suma =+ liczba % 10
        liczba = int(liczba / 10)
    return suma
    
def main(args):
    
    liczba = input("Podaj liczbę (min. dwucyfrową): ")
    liczba = int(liczba)
    
    while liczba < 10:
        liczba = input("Podaj liczbę (min. dwucyfrową): ")
        liczba = int(liczba)
    
    suma = 0
    while liczba > 0:
        suma += liczba % 10
        liczba = int(liczba / 10)
    
    print("Suma: ", sumuj_cyfry1(liczba))
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
