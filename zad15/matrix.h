//
// Created by Ania on 21.12.2021.
//

#ifndef ZAD15_MATRIX_H
#define ZAD15_MATRIX_H
struct MATRIX_S {
    int x; /* liczba wierszy */
    int y; /* liczba kolumn */
    int *arr; /* adres tablicy x*y elementowej */
};

typedef struct MATRIX_S MATRIX;

MATRIX m_create(int, int);

int m_remove(MATRIX *);

int m_scanf(MATRIX *, int, int);

int m_scanf_(MATRIX *);

int m_printf(MATRIX);

int getArraySize(int [], int, int);

#endif //ZAD15_MATRIX_H
