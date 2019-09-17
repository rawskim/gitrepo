#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  warunek.py
#  
#  Copyright 2019 kl3ag2 <kl3ag2@ubu16>
#  


def main(args):
    a = int(input("Podaj pierwszą liczę: "))
    b = int(input("Podaj drugą liczę: "))
    c = int(input("Podaj trzecią liczę: "))
    print(a)
    print(b)
    print(c)

    if a > b and a > c:
        print ("Największą liczbą jest: ", a)
    elif b > a and b > c:
        print ("Największą liczbą jest: ", b)
    else:
        print ("Największą liczbą jest: ", c)

    return 0
    
if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
