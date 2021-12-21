#include <stdio.h>
#include "days.h"

int main()
{
    struct DAY data1, data2;

    printf("Podaj daty w formacie DD.MM.RRRR DD.MM.RRRR: ");
    scanf("%d%d%d%d%d%d", &data1.dzien, &data1.miesiac, &data1.rok, &data2.dzien, &data2.miesiac, &data2.rok);

    printf("Pomiedzy tymi datami liczba dni wynosi: %d\n", days(data1, data2));
    return 0;
}

