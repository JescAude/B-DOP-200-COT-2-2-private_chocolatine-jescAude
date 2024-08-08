/*
** EPITECH PROJECT, 2024
** test_my_101_pong_game
** File description:
** units tests to check 101_pong game implementation 
*/

#include "../include/my.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

void redirect_all_std (void)
{
    cr_redirect_stdout() ;
    cr_redirect_stderr() ;
}

vector vector_velocity(vector t1, vector t2);
vector coordinates_after_time(vector t1, vector t2, int n);
int angle_incidence(vector t1, vector t2);

Test(vector_velocity, is_velocity_vector_right_1)
{
    vector t1 = {1, 3, 5};
    vector t2 = {7, 9, -2};
    vector t3 = vector_velocity(t1, t2);
    vector t4 = {6.00, 6.00, -7.00};
    cr_assert_eq(t3.x, t4.x);
    cr_assert_eq(t3.y, t4.y);
    cr_assert_eq(t3.z, t4.z);
}

Test(vector_velocity, is_velocity_vector_right_2)
{
    vector t1 = {1.1, 3, 5};
    vector t2 = {-7, 9, 2};
    vector t3 = vector_velocity(t1, t2);
    vector t4 = {-8.10, 6.00, -3.00};
    cr_assert_eq(t3.x, t4.x);
    cr_assert_eq(t3.y, t4.y);
    cr_assert_eq(t3.z, t4.z);

}

Test(coordinates_after_time, coordinates_after_time_1)
{
    vector t1 = {1, 3, 5};
    vector t2 = {7, 9, -2};
    int n = 4;
    vector t3 = coordinates_after_time(t1, t2, n);
    vector t4 = {31.00, 33.00, -30.00};
    cr_assert_eq(t3.x, t4.x);
    cr_assert_eq(t3.y, t4.y);
    cr_assert_eq(t3.z, t4.z);    
}

Test(coordinates_after_time, coordinates_after_time_2)
{
    vector t1 = {1.1, 3, 5};
    vector t2 = {-7, 9, 2};
    int n = 4;
    vector t3 = coordinates_after_time(t1, t2, n);
    vector t4 = {-39.40, 33.00, -10.00};
    cr_assert_eq(t3.x, t4.x);
    cr_assert_eq(t3.y, t4.y);
    cr_assert_eq(t3.z, t4.z);
}

Test(angle_incidence, testing_outputs_of_angle_incidence_1)
{
    vector t1 = {1, 3, 5};
    vector t2 = {7, 9, -2};
    int n = angle_incidence(t1, t2);
    cr_assert_eq(n, 0);
}

Test(angle_incidence, testing_outputs_of_angle_incidence_2)
{
    vector t1 = {1.1, 3, 5};
    vector t2 = {-7, 9, 2};
    int n = angle_incidence(t1, t2);
    cr_assert_eq(n, 0);
}
