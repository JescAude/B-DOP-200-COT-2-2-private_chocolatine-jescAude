/*
** EPITECH PROJECT, 2024
** main_function
** File description:
** a main function to test 101_pong_project
*/

#include "../include/my.h"

int main(int ac, char **av)
{
    int n = 0;
    int i = 0;
    vector t1;
    vector t2;
    char c = '\n';

    if (ac == 2 && strcmp(av[1], "-h") == 0) {
        printf("USAGE\n");
        printf("   ./101pong x0 y0 z0 x1 y1 z1 n\n");
        printf("%c", c);
        printf("DESCRIPTION\n");
        printf("    x0  ball abscissa at time t - 1\n");
        printf("    y0  ball ordinate at time t - 1\n");
        printf("    z0  ball altitude at time t - 1\n");
        printf("    x1  ball abscissa at time t\n");
        printf("    y1  ball ordinate at time t\n");
        printf("    z1  ball altitude at time t\n");
        printf("    n   time shift (greater than or");
        printf(" equal to zero, integer)\n");
    }
    if (ac == 2 && (strcmp(av[1], "-h") > 0 || strcmp(av[1], "-h") < 0)) {
        return (84);
    }
    if (ac != 8 && ac != 2) {
        return (84);
    }
    if (ac == 8) {
        t1.x = atof(av[1]);
        t1.y = atof(av[2]);
        t1.z = atof(av[3]);
        t2.x = atof(av[4]);
        t2.y = atof(av[5]);
        t2.z = atof(av[6]);
        n = atoi(av[7]);
        if (n >= 0 && (atof(av[7]) == n)) {
            coordinates_after_time(t1, t2, n);
            angle_incidence(t1, t2);
        } else {
            return (84);
        }
    } else {
        return (84);
    }
}
