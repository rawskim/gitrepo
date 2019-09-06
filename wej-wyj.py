#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  wej-wyj.py
#  


def main(args):
    imie = input('Podaj swoje imię\n')
    nazwisko = input('Podaj swoje nazwisko\n')
    print('Witaj ', imie, nazwisko, '!')

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
