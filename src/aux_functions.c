/*
** EPITECH PROJECT, 2024
** B-MAT-200-COT-2-2-bs108trigo-jessica.moussougan
** File description:
** aux_functions
*/

#include "../include/trigo.h"

void free_tab(double **tab, int size)
{
    for (int i = 0; i < size; i++) {
        free(tab[i]);
    }
    free(tab);
}

void print_matrix(double **tab, int size)
{
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%.2f", tab[i][j]);
            if (j == size - 1)
                printf("\n");
            else
                printf("\t");
        }
    }
}

double iterative_factorial(int nb)
{
    double m = 1;
    int i = 0;

    if (nb < 0)
        return (0);
    if (nb == 0 || nb == 1)
        return (1);
    for (i = 1; i <= nb; i++) {
        m = m * i;
    }
    return (m);
}

double **coeff_to_array(char **av, int size)
{
    double **array = allocate_array(size);
    int i = 2;

    for (int k = 0; k < size; k++) {
        for (int l = 0; l < size; l++) {
            array[k][l] = atof(av[i]);
            i++;
        }
    }
    return (array);
}

double **allocate_array(int size)
{
    double **tab = malloc(sizeof(double *) * size);

    for (int i = 0; i < size; i++) {
        tab[i] = malloc(sizeof(double) * size);
    }
    return (tab);
}
