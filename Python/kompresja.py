#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  kompresja.py
#  


def main(args):
    Vk = 74171
    Vnk = 117760
    # ~ Vk = input('Podaj rozmiar danych skompresowanych (Bajty): ')
    # ~ Vnk = input('Podaj rozmiar danych nieskompresowanych (Bajty): ')
    Rc = int(Vk) / int (Vnk) * 100
    R2c = (1 - int(Vk) / int(Vnk)) * 100

    Vk2 = 70074
    Vnk2 = 117760
    Rc2 = int(Vk) / int (Vnk) * 100
    R2c2 = (1 - int(Vk) / int(Vnk)) * 100

    print('ZIP: O ile zmniejszyły się dane: ', Rc)
    print('7ZIP: O ile zmniejszyły się dane: ', Rc2)
    print('O ile zmniejszyły się dane: ', Rc)
    print('Ile miejsca zaoszczędzono: ', R2c)
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
