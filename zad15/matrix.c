//
// Created by Ania on 21.12.2021.
//
#include "matrix.h"
#include <stdio.h>

MATRIX m_create(int x, int y) {
    MATRIX matrix;
    int arr[x * y];
    matrix.x = x;
    matrix.y = y;
    matrix.arr = arr;

    return matrix;
}

int m_scanf(MATRIX *matrix, int x, int y) {
    int value;
    scanf("%d", &value);
    for (int *i = matrix->arr; i < matrix->arr + x * y; ++i) {
        *i = value;
    }

    return getArraySize(matrix->arr, x, y);
}

int getArraySize(int arr[], int x, int y) {

    return 0;
}

int m_printf(MATRIX matrix) {
    for (int *i = matrix.arr; i < matrix.arr + matrix.x * matrix.y; ++i) {
        printf("%d ", *i);
    }
    return 0;
}

