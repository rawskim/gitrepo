#!/usr/bin/env python
# -*- coding: utf-8 -*-

import random


def main(args):
    liczba = random.randint(1, 10)  # losowanie liczby
    print("Wylosowano:", liczba)
    # pobieramy dane od użytkownika
    for i in range(3):
        print("Próba:", i + 1)
        odp = input("Podaj liczbę od 1 do 10: ")
        print("PodałeŚ:", odp)

        if liczba == int(odp):  # porównywanie odp z wylosowaną liczbąpp
            print("Zgadłeś kozaku!")
            break  # przerwanie działania pętli
        elif i == 2:
            print("Wylosowana liczba to:", liczba)
        else:
            print("Słaby jesteś, spróbuj jeszcze raz")

    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
