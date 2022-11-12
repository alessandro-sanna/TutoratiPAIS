//
// Created by sanna on 23/12/2021.
//

#include <stdlib.h>
#include "magic.h"

void reset_array(int *array, int size) {
    for(int i = 0; i < size; i++) array[i] = 0;
}

_Bool check_magic(int rows, int cols, int matrix[rows][cols], int *m_sum) {
    if (rows != cols) return 0;
    int dim = rows;
    int current_magic;
    int magics[dim];

    reset_array(magics, dim);

    for (int i = 0; i < dim; i++) {
        for(int j = 0; j < dim; j++) {
            magics[i] += matrix[i][j];
        }
        if (i > 0 && magics[i] != magics[i - 1]) return 0;
    }
    current_magic = magics[0];
    reset_array(magics, dim);

    for (int i = 0; i < dim; i++) {
        for(int j = 0; j < dim; j++) {
            magics[i] += matrix[j][i];
        }
        if (i > 0 && (magics[i] != magics[i - 1] || magics[i] != current_magic)) return 0;
    }
    reset_array(magics, dim);

    for (int i = 0; i < dim; i++) {
        magics[0] += matrix[i][i];
        magics[1] += matrix[i][dim - 1 - i];
    }
    if (magics[0] != magics[1] || magics[0] != current_magic) return 0;
    *m_sum = current_magic;
    return 1;
};

int magic_sum(int rows, int cols, int matrix[rows][cols]) {
    int m_sum;
    _Bool is_magic = check_magic(rows, cols, matrix, &m_sum);
    if (is_magic) {
        return m_sum;
    } else {
        exit(-1);
    }
}

int greater_magic(int rows_1, int cols_1, int matrix_1[rows_1][cols_1],
                  int rows_2, int cols_2, int matrix_2[rows_2][cols_2]) {
    int ret_val;
    int m_sum_1 = magic_sum(rows_1, cols_1, matrix_1);
    int m_sum_2 = magic_sum(rows_2, cols_2, matrix_2);
    ret_val = (m_sum_1 > m_sum_2) ? -1 : 1;
    ret_val = (m_sum_1 == m_sum_2) ? 0 : ret_val;
    return ret_val;
}