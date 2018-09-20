#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  petla-for.py
#  


def main(args):
    
    start = int(input('Podaj początek zakresu: '))
    stop = int(input('Podaj zakres końcowy: '))

    while start >= stop:
        stop + int(input("Błedny zakres! Podaj inny: "))
    if start >= stop

    for liczba in range(start, stop + 1):
        if liczba % 2 == 0:
            print(liczba)
        
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
