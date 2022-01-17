//
// Created by Ania on 16.01.2022.
//

#include "sort_int.h"

void select_sort(int *arr, int n) {
    int i, j, min_idx;

    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) { min_idx = j; }
        }

        swap(&arr[min_idx], &arr[i]);
    }
}
