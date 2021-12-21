#include <stdio.h>
#include "point.h"

int main(){
    struct POINT a, b, c;

    printf("Podaj wspolrzedne punktu a (X Y):  ");
    scanf("%d%d", &a.x, &a.y);
    printf("Podaj wspolrzedne punktu b (X Y):  ");
    scanf("%d%d", &b.x, &b.y);
    printf("Podaj wspolrzedne punktu c (X Y):  ");
    scanf("%d%d", &c.x,&c.y);
    printf("Pole: %.2f\n" , area(a, b, c));
    printf("Obwod: %.2f", perimeter(a,b,c));
}