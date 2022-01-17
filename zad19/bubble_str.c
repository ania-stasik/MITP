//
// Created by Ania on 16.01.2022.
//

#include <string.h>
#include <malloc.h>
#include "sort_str.h"

void bubble_str(char *arr[5], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}


