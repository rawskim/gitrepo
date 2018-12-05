#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  potega.py


def potega_re(a, n):
    if n == 0:
        return 1
    potega_re(a, n-1) * a

def potega_it(a, n):
    # a^n = a1 * a2 * ... * an
    # a^1 = a
    iloczyn = 1
    for i in range(n):
        iloczyn = iloczyn * a
    return iloczyn

def main(args):
    #  zmienne lokalne
    podstawa = int(input("Podaj podstawę: "))
    wykladnik = int(input("Podaj wykładnik: "))
    print("{} do potęgi {} wynosi {}".format(a, n, potega_it(podstawa, wykladnik)))
    return 0

if __name__ == '__main__':
    import sys
sys.exit(main(sys.argv))
