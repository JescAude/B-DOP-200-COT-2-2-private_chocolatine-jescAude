/*
** EPITECH PROJECT, 2024
** angle
** File description:
** incidence
*/

#include "../include/my.h"

int angle_incidence(vector t1, vector t2)
{
    vector t5;
    double norme0 = 0;
    double norme1 = 0;
    double angle0 = 0;
    double angle1 = 0;

    norme0 = (t5.x * t5.x) + (t5.y * t5.y) + (t5.z * t5.z);
    norme1 = sqrt(norme0);
    angle0 = t5.z / norme1;
    if (angle0 <= 1 && angle0 >= -1) {
        angle1 = fabs(asin(angle0)) * (180 / M_PI);
        if (angle1 <= 90 && angle1 >= 0) {
            printf("The incidence angle is :\n");
            printf("%.2f degrees\n", angle1);
        } else {
            printf("The ball won't reach the paddle.\n");
        }
    } else {
        printf("The ball won't reach the paddle.\n");
    }
    return (0);
}
