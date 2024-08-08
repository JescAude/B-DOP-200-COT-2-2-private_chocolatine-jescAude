/*
** EPITECH PROJECT, 2024
** B-MAT-200-COT-2-2-bs108trigo-jessica.moussougan
** File description:
** my.h
*/

#include <criterion/criterion.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>

#ifndef TRIGO_H_
    #define TRIGO_H_

void free_tab(double **tab, int size);

void print_matrix(double **tab, int size);

double **allocate_array(int size);

double iterative_factorial(int nb);

double **coeff_to_array(char **av, int size);

double **multiply_matrix(double **tab1, double **tab2, int size);

double **null_matrix(int size);

double **identity_matrix(int size);

double **multiply_matrix_and_number(double **tab, int size, double multi);

double **divide_matrix_by_number(double **tab, int size, double multi);

double **sum_matrix(double **tab1, double **tab2, int size);

double **power_matrix(double **tab, int size, int power);

double **compute_exp(double **matrix, int size, double n);

double **compute_sin(double **matrix, int size, double n);

double **compute_cos(double **matrix, int size, double n);

double **compute_sinh(double **matrix, int size, double n);

double **compute_cosh(double **matrix, int size, double n);

bool check_first_parameter(char *str);

bool check_coefficents(char **av);

#endif
