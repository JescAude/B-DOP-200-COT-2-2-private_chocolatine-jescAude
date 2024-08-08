/*
** EPITECH PROJECT, 2024
** my.h
** File description:
** structure and function'sprotypes used in 101_pong_project
*/

#include <math.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

#ifndef MY_H

    #define MY_H

typedef struct my_struct {

    double x;
    double y;
    double z;
}vector;

vector vector_velocity(vector t1, vector t2);

vector coordinates_after_time(vector t1, vector t2, int n);

int angle_incidence(vector t1, vector t2);

#endif
