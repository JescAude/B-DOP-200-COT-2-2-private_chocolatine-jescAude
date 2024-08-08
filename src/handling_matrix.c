/*
** EPITECH PROJECT, 2024
** B-MAT-200-COT-2-2-bs108trigo-jessica.moussougan
** File description:
** matrix
*/

#include "../include/trigo.h"

double **null_matrix(int size)
{
    double **res = allocate_array(size);

    for (int j = 0; j < size; j++) {
        for (int k = 0; k < size; k++) {
            res[j][k] = 0;
        }
    }
    return (res);
}

double **multiply_matrix(double **tab1, double **tab2, int size)
{
    int i = 0;
    int j = 0;
    int k = 0;
    double **tab3 = null_matrix(size);

    for (j = 0; j < size; j++) {
        for (k = 0; k < size; k++) {
            for (int m = 0; m < size; m++) {
                tab3[j][k] += tab1[j][m] * tab2[m][k];
            }
        }
    }
    return (tab3);
}

double **divide_matrix_by_number(double **tab, int size, double multi)
{
    int i = 0;
    int j = 0;
    int k = 0;
    double **res = allocate_array(size);

    for (j = 0; j < size; j++) {
        for (k = 0; k < size; k++) {
            res[j][k] = tab[j][k] / multi;
        }
    }
    return (res);
}

double **multiply_matrix_and_number(double **tab, int size, double multi)
{
    int i = 0;
    int j = 0;
    int k = 0;
    double **res = allocate_array(size);

    for (j = 0; j < size; j++) {
        for (k = 0; k < size; k++) {
            res[j][k] = tab[j][k] * multi;
        }
    }
    return (res);
}

double **identity_matrix(int size)
{
    double **res = allocate_array(size);

    for (int j = 0; j < size; j++) {
        for (int k = 0; k < size; k++) {
            if (j == k)
                res[j][k] = 1;
            else
                res[j][k] = 0;
        }
    }
    return (res);
}

double **sum_matrix(double **tab1, double **tab2, int size)
{
    int i = 0;
    int j = 0;
    int k = 0;
    double **res = allocate_array(size);

    for (j = 0; j < size; j++) {
        for (k = 0; k < size; k++) {
            res[j][k] = tab1[j][k] + tab2[j][k];
        }
    }
    return (res);
}

double **power_matrix(double **tab, int size, int power)
{
    double **res = NULL;

    if (power == 0)
        return (identity_matrix(size));
    res = tab;
    for (int i = 0; i < power - 1; i++)
        res = multiply_matrix(res, tab, size);
    return (res);
}
