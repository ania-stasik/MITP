//
// Created by Ania on 21.12.2021.
//
#include "point.h"
#include <math.h>

float perimeter(struct POINT a, struct POINT b, struct POINT c) {

    float side1 = sqrtf(powf(b.x - a.x, 2) + powf(b.y - a.y, 2));
    float side2 = sqrtf(powf(c.x - a.x, 2) + powf(c.y - a.y, 2));
    float side3 = sqrtf(powf(c.x - b.x, 2) + powf(c.y - b.y, 2));

    float perimeter = side1 + side2 + side3;

    return perimeter;
}
