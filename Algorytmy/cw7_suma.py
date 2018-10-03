#!/usr/bin/env python
# -*- coding: utf-8 -*-
# Napisz program, który sumuje cyfry liczby podanej przez użytkownika.
# Wydrukuj tę sumę.


def main(args):
	
	liczba = int(input("Podaj liczbę: "))
	
	cyfra = list(map(int, str(liczba)))

	print ("Suma cyfr liczby wynosi: ", sum(cyfra))
	
	return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
