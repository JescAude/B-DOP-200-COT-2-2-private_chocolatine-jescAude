/*
** EPITECH PROJECT, 2024
** 101_pong_project
** File description:
** a function that return the coordinates of the ball after a given time
*/

#include "../include/my.h"

vector coordinates_after_time(vector t1, vector t2, int n)
{
    vector t4;
    vector t3;

    t3 = vector_velocity(t1, t2);
    t4.x = (t3.x * n) + t2.x;
    t4.y = (t3.y * n) + t2.y;
    t4.z = (t3.z * n) + t2.z;
    printf("At time t + %d, ball coordinates will be :\n", n);
    printf("(%.2f, %.2f, %.2f)\n", t4.x, t4.y, t4.z);
    return (t4);
}
