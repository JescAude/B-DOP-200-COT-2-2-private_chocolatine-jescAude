/*
** EPITECH PROJECT, 2024
** B-MAT-200-COT-2-2-bs108trigo-jessica.moussougan
** File description:
** main
*/

#include "../include/trigo.h"

int main(int ac, char **av)
{
    double **tab = NULL;
    double **res = NULL;

    if ((ac - 2) - (pow(sqrt(ac - 2), 2)) != 0)
        return (84);
    if (ac <= 1 || ac == 2)
        return (84);
    if (ac - 2 == 0)
        return (84);
    if (check_first_parameter(av[1]) == false || check_coefficents(av) == false)
        return (84);
    if (strcmp(av[1], "EXP") == 0) {
        ac = sqrt(ac - 2);
        tab = coeff_to_array(av, ac);
        res = compute_exp(tab, ac, 49);
        print_matrix(res, ac);
        free_tab(tab, ac);
        free_tab(res, ac);
    }
    if (strcmp(av[1], "SIN") == 0) {
        ac = sqrt(ac - 2);
        tab = coeff_to_array(av, ac);
        res = compute_sin(tab, ac, 49);
        print_matrix(res, ac);
        free_tab(tab, ac);
        free_tab(res, ac);
    }
    if (strcmp(av[1], "COS") == 0) {
        ac = sqrt(ac - 2);
        tab = coeff_to_array(av, ac);
        res = compute_cos(tab, ac, 49);
        print_matrix(res, ac);
        free_tab(tab, ac);
        free_tab(res, ac);
    }
    if (strcmp(av[1], "SINH") == 0) {
        ac = sqrt(ac - 2);
        tab = coeff_to_array(av, ac);
        res = compute_sinh(tab, ac, 49);
        print_matrix(res, ac);
        free_tab(tab, ac);
        free_tab(res, ac);
    }
    if (strcmp(av[1], "COSH") == 0) {
        ac = (sqrt(ac - 2));
        tab = coeff_to_array(av, ac);
        res = compute_cosh(tab, ac, 49);
        print_matrix(res, ac);
        free_tab(tab, ac);
        free_tab(res, ac);
    }
    return (0);
}
