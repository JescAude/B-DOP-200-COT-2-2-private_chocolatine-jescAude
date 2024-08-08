/*
** EPITECH PROJECT, 2024
** B-MAT-200-COT-2-2-bs108trigo-jessica.moussougan
** File description:
** handle_errors
*/

#include "../include/trigo.h"

bool check_first_parameter(char *str)
{
    if (strcmp(str, "EXP") != 0 && strcmp(str, "COS") != 0
    && strcmp(str, "SIN") != 0 && strcmp(str, "COSH") != 0
    && strcmp(str, "SINH") != 0)
        return (false);
    return (true);
}

bool check_coefficents(char **av)
{
    for (int i = 2; av[i] != NULL; i++) {
        for (int j = 0; av[i][j] != 0; j++) {
            if ((av[i][j] < '0' || av[i][j] > '9')
            && av[i][j] != '-')
                return (false);
        }
    }
    return (true);
}
