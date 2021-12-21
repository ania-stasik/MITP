//
// Created by Ania on 21.12.2021.
//


#include "point.h"

float area(struct POINT a, struct POINT b, struct POINT c) {
    float tab[2][2];
    tab[0][0] = b.x - a.x;
    tab[0][1] = b.y - a.y;
    tab[1][0] = c.x - a.x;
    tab[1][1] = c.y - a.y;

    float determinant = tab[0][0] * tab[1][1] - tab[0][1] * tab[1][0];

    if (determinant < 0) {
        determinant = -determinant;
    }

    float area = determinant / 2;

    return area;
}

