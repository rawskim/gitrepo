#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  pętla-cw2.py
#  Dane wejściowe:
#  zmienne start i stop podane przez użytkownika
#  Dane wyjściowe:
#  
def main(args):
    
    start = int(input("przedział lewy "))
    stop = int(input("przedział prawy "))
    
    for liczba in range(start, stop +1):
        print(liczba, " ",end='') 
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
