#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  trojkat.py
#  

def trojkat(a, b, c):
    """
    Funkcja bada możliwość zbudowania trójkąta z trzech podanych boków
    Funkcja zwraca true jezeli sie da, false w przeciwnym wypadku
    """
    if  a + b > c and a + c > b and b + c > a:
        return True
        
    return False
    

def main(args):
    a = int(input('Podaj długość 1 boku '))
    b = int(input('Podaj długość 2 boku '))
    c = int(input('Podaj długość 3 boku '))

    if trojkat(a, b, c):
        print("Da się")
    else:
        print("Nie da się")
        
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
