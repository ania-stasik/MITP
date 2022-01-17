//
// Created by Ania on 16.01.2022.
//

#include <string.h>
#include "sort_str.h"

void select_str(char *arr[5], int n) {
    int i, j, min_idx;
    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (strcmp(arr[j], arr[min_idx]) < 0) {
                min_idx = j;
            }
        }
        swap(&arr[min_idx], &arr[i]);
    }

}