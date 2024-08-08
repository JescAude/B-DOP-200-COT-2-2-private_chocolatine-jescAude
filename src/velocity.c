/*
** EPITECH PROJECT, 2024
** 101_pong_project
** File description:
** a function that calcute the velocity vector
*/

#include "../include/my.h"

vector vector_velocity(vector t1, vector t2)
{
    vector t3;

    t3.x = t2.x - t1.x;
    t3.y = t2.y - t1.y;
    t3.z = t2.z - t1.z;
    printf("The velocity vector of the ball is :\n");
    printf("(%.2f, %.2f, %.2f)\n", t3.x, t3.y, t3.z);
    return (t3);
}
