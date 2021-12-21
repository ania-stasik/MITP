#include <stdio.h>
#include "matrix.h"

int main() {
    MATRIX matrix = m_create(3, 3);
    m_scanf(&matrix, 3, 3);
    m_printf(matrix);
    return 0;
}
