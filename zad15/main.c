#include <stdio.h>
#include "matrix.h"

int main() {
    MATRIX matrix = m_create(3, 3);
    m_scanf(&matrix, 3, 3);
    m_printf(matrix);
    m_put(&matrix, 2, 2, 4);
    printf("\n%d\n", m_get(&matrix, 2, 2));
    m_printf(matrix);
    m_scanf_(&matrix);
    printf("\n%d\n", m_scanf_(&matrix));
    m_printf(matrix);
    printf("\n det= %d\n", m_determinant(&matrix));
    printf("dupa");
    m_remove(&matrix);
    return 0;
}
