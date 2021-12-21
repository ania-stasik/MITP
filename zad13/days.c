//
// Created by Ania on 21.12.2021.
//

#include "days.h"

int days(struct DAY dzienPierwszy, struct DAY dzienDrugi) {
    int ilosc1, ilosc2, wynik;
    ilosc1 = policzDni(dzienPierwszy.dzien, dzienPierwszy.miesiac, dzienPierwszy.rok);
    ilosc2 = policzDni(dzienDrugi.dzien, dzienDrugi.miesiac, dzienDrugi.rok);

    wynik = ilosc1 - ilosc2;

    if (wynik < 0) {
        wynik = -wynik;
    }
    return wynik;
}


int policzDni(int dzien, int miesiac, int rok) {
    int liczba = dzien;

    const int tab[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    for (int i = 1; i != miesiac; i++) {
        liczba += tab[i - 1];
    }
    liczba += rok * 365;

    if (miesiac <= 2) {
        liczba += (rok - 1) / 4 - (rok - 1) / 100 + (rok - 1) / 400;
    } else {
        liczba += rok / 4 - rok / 100 + rok / 400;
    }
    return liczba;
}