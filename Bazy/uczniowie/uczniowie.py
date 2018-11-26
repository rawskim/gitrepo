#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  klasa_uczen.py

import os
from peewee import *

baza_plik = 'test_orm.db'
############## MODEL
baza = SqliteDatabase(baza_plik)
class BazaModel(Model):
    class Meta:
        database = baza

class Klasa(BazaModel):
    
    nazwa = CharField(null=False)
    roknaboru = IntegerField(default=0)
    rokmatury = IntegerField(default=0)
    
class Uczen(BazaModel):
    
    imie = CharField(null=False)
    nazwisko = CharField(null=False)
    plec = BooleanField()
    egz_hum = DecimalField(default=0)
    egz_mat = DecimalField(default=0)
    egz_jez = DecimalField(default=0)
    klasa = ForeignKeyField(Klasa, related_name='id_klasa')



class Przedmiot(BazaModel):
    
    przedmiot= CharField(null=False)
    imie_naucz=CharField(null=False)
    nazwisko_naucz=CharField(null=False)
    plec_naucz=BooleanField()
    
class Ocena(BazaModel):
    
    datad= DateField()
    ocena= DecimalField()
    uczen = ForeignKeyField(Uczen, related_name='id_uczen')
    przedmiot = ForeignKeyField(Przedmiot, related_name='id_przedmiot')
    
def main(args):
    if os.path.exists(baza_plik):
        os.remove(baza_plik)
    baza.connect()
    baza.create_tables([Uczen, Klasa, Ocena, Przedmiot])
    
    kl1 = Klasa(nazwa='2A', roknaboru=2012, rokmatury=2015)
    kl1.save()
    
    kl1 = Klasa(nazwa='1A', roknaboru=2011, rokmatury=2014)
    kl1.save()
    
    kl1 = Klasa(nazwa='3A', roknaboru=2013 , rokmatury=2016)
    kl1.save()
    
    kl2a = Klasa.select().where(Klasa.nazwa=='2A').get()
    u1 = Uczen(imie='Jan', nazwisko='Kowalski', plec=False, klasa=kl2a)
    u1.save()
    
    kl1a = Klasa.select().where(Klasa.nazwa=='1A').get()
    u1 = Uczen(imie='Magda', nazwisko='Wolna', plec=True, klasa=kl1a)
    u1.save()
    
    kl3a = Klasa.select().where(Klasa.nazwa=='3A').get()
    u1 = Uczen(imie='Stanisław', nazwisko='Płaski', plec=False, klasa=kl3a)
    u1.save()
    
    uczniowie = Uczen.select()
    for uczen in uczniowie:
        print(uczen.id, uczen.imie, uczen.nazwisko)
    
    klasy = Klasa.select()
    for klasa in klasy:
        print(klasa.id, klasa.nazwa, klasa.roknaboru, klasa.rokmatury)
    
    baza.close()
    return 0

if __name__ == '__main__':
    import sys
sys.exit(main(sys.argv))
