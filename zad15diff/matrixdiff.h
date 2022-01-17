//
// Created by Ania on 11.01.2022.
//

#ifndef ZAD15DIFF_MATRIXDIFF_H
#define ZAD15DIFF_MATRIXDIFF_H


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

int m_get(MATRIX *, int, int);

int m_put(MATRIX *, int, int, int);

int m_determinant(MATRIX* ) ;

#endif //ZAD15DIFF_MATRIXDIFF_H
