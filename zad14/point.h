
//
// Created by Ania on 21.12.2021.
//

#ifndef ZAD14_POINT_H
#define ZAD14_POINT_H
struct POINT;

float area(struct POINT, struct POINT, struct POINT);


float perimeter(struct POINT, struct POINT, struct POINT);

struct POINT {
    int x;
    int y;
};

#endif //ZAD14_POINT_H
