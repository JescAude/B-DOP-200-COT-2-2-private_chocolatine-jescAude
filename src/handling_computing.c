/*
** EPITECH PROJECT, 2024
** B-MAT-200-COT-2-2-bs108trigo-jessica.moussougan
** File description:
** computing
*/

#include "../include/trigo.h"

double **compute_exp(double **matrix, int size, double n)
{
    double **res = identity_matrix(size);
    double **poww = NULL;
    double **prod = NULL;
    double facto = 0;

    for (int i = 1; i < n; i++) {
        facto = iterative_factorial(i);
        poww = power_matrix(matrix, size, i);
        prod = divide_matrix_by_number(poww, size, facto);
        res = sum_matrix(res, prod, size);
    }
    free_tab(prod, size);
    free_tab(poww, size);
    return (res);
}

double **compute_sin(double **matrix, int size, double n)
{
    double **res = matrix;
    double **poww = NULL;
    double **prod = NULL;
    double facto = 0;

    for (int i = 1; i < n; i++) {
        poww = power_matrix(matrix, size, (2 * i + 1));
        facto = iterative_factorial(2 * i + 1);
        prod = divide_matrix_by_number(poww, size, facto);
        prod = multiply_matrix_and_number(prod, size, pow(-1, i));
        res = sum_matrix(res, prod, size);
    }
    free_tab(prod, size);
    free_tab(poww, size);
    return (res);
}

double **compute_cos(double **matrix, int size, double n)
{
    double **res = identity_matrix(size);
    double **poww = NULL;
    double **prod = NULL;
    double facto = 0;

    for (int i = 1; i < n; i++) {
        poww = power_matrix(matrix, size, (2 * i));
        facto = iterative_factorial(2 * i);
        prod = divide_matrix_by_number(poww, size, facto);
        prod = multiply_matrix_and_number(prod, size, pow(-1, i));
        res = sum_matrix(res, prod, size);
    }
    free_tab(prod, size);
    free_tab(poww, size);
    return (res);
}

double **compute_sinh(double **matrix, int size, double n)
{
    double **res = matrix;
    double **poww = NULL;
    double **prod = NULL;
    double facto = 0;

    for (int i = 1; i < n; i++) {
        poww = power_matrix(matrix, size, (2 * i + 1));
        facto = iterative_factorial((2 * i + 1));
        prod = divide_matrix_by_number(poww, size, facto);
        res = sum_matrix(res, prod, size);
    }
    free_tab(prod, size);
    free_tab(poww, size);
    return (res);
}

double **compute_cosh(double **matrix, int size, double n)
{
    double **res = identity_matrix(size);
    double **poww = NULL;
    double **prod = NULL;
    double facto = 0;

    for (int i = 1; i < n; i++) {
        poww = power_matrix(matrix, size, (2 * i));
        facto = iterative_factorial((2 * i));
        prod = divide_matrix_by_number(poww, size, facto);
        res = sum_matrix(res, prod, size);
    }
    free_tab(prod, size);
    free_tab(poww, size);
    return (res);
}
