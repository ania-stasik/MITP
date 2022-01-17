//
// Created by Ania on 11.01.2022.
//

#include "matrixdiff.h"
#include <stdio.h>
#include <malloc.h>
#include <math.h>

MATRIX m_create(int x, int y) {
    MATRIX matrix;
    int *arr = malloc(sizeof(int) * x * y);
    matrix.x = x;
    matrix.y = y;
    matrix.arr = arr;

    return matrix;
}

int m_scanf(MATRIX *matrix, int x, int y) {
    int value;
    scanf("%d", &value);
    for (int i = 0; i < x * y; ++i) {
        matrix->arr[i] = value;
    }

    return getArraySize(matrix->arr, x, y);
}

int getArraySize(int arr[], int x, int y) {

    return 0;
}

int m_printf(MATRIX matrix) {
    for (int i = 0; i < matrix.x * matrix.y; i++) {
        printf("%d ", matrix.arr[i]);
    }
    return 0;
}

int m_scanf_(MATRIX *matrix) {
    if (matrix != NULL) {
        if (matrix->arr != NULL) {
            int value = *(matrix->arr);
            for (int i = 0; i < matrix->x * matrix->y; i++) {
                if (matrix->arr[i] != value) {
                    matrix->arr = realloc(matrix->arr, matrix->x * matrix->y);
                    return m_scanf(matrix, matrix->x, matrix->y);
                }
            }
        }
    }
    return getArraySize(matrix->arr, matrix->x, matrix->y);
}

int m_remove(MATRIX *matrix) {
    if (matrix == NULL) {
        return 0;
    }
    free(matrix->arr);
    matrix->x = 0;
    matrix->y = 0;
    return 1;
}

int m_get(MATRIX *matrix, int x, int y) {
    if (x > matrix->x || y > matrix->y || x < 0 || y < 0) {
        return 0;
    }
    return matrix->arr[x * y];
}

int m_put(MATRIX *matrix, int x, int y, int value) {
    if (x > matrix->x || y > matrix->y || x < 0 || y < 0) {
        return 0;
    }
    matrix->arr[x * y] = value;
    return 1;
}

int m_determinant(MATRIX *matrix) {
    int determinant = 0;
    int column, row;
    MATRIX Matrix;

    if (matrix->x != matrix->y) {
        printf("Macierz nie jest kwadratowa, nie da się obliczyc wyznacznika\n");
        return 0;
    } else if (matrix->x == 1) {
        return *(matrix->arr);
    } else if (matrix->x == 2) {
        return ((*matrix->arr)) * (*(matrix->arr + 3)) - (*(matrix->arr + 1)) * ((matrix->arr + 2));
    } else {
        Matrix = m_create((matrix->x - 1), (matrix->x - 1));
        for (int ingredient = 0; ingredient < matrix->x; ingredient++) {
            column = 0;
            for (int row = 1; row < matrix->y; row++) {
                row = 0;
                for (int column = 0; column < matrix->x; column++) {
                    if (column == ingredient) {
                        continue;
                    }
                    m_put(&Matrix, column, row, m_get(matrix, row, column));
                    row++;
                }
                column++;
            }
            determinant += (*(matrix->arr + ingredient) * pow(-1, ingredient) * m_determinant(&Matrix));
        }
    }
    m_remove(&Matrix);
    return determinant;
}



