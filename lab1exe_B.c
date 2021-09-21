/*
 * File Name:               lab1exe_B.c
 * Course:                  ENSF 614 - Fall 2021
 * Lab # and Assignment #:  Lab 1 Exercise B
 * Lab section:             B01
 * Completed by:            Bhavyai Gupta
 * Submission Date:         September 20, 2021
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const double G = 9.8; /* gravitation acceleration 9.8 m/s^2 */
const double PI = 3.141592654;

void create_table(double v);
double projectile_travel_time(double a, double v);
double projectile_travel_distance(double a, double v);
double degree_to_radian(double d);

int main(void)
{
    int n;
    double velocity;

    printf("Please enter the velocity at which the projectile is launched (m/sec): ");
    n = scanf("%lf", &velocity);

    // checks the validity of input by the user
    if (n != 1)
    {
        printf("Invalid input. Bye...");
        exit(1);
    }

    while (velocity < 0)
    {
        printf("please enter a positive number for velocity: ");
        n = scanf("%lf", &velocity);

        // checks the validity of input by the user
        if (n != 1)
        {
            printf("Invalid input. Bye...");
            exit(1);
        }
    }

    create_table(velocity);
    return 0;
}

/**
 * Prints the table with relationship between trajectory angle and projectile maximum
 * travel distance and time for a given initial velocity
 */
void create_table(double v)
{
    printf("\nBelow is the table showing time (t) and distance (d) for various angles -\n\n");

    // print the header and subheader and dividers
    printf("+---------+-----------------+-----------------+\n");
    printf("| %7s | %15s | %15s |\n", "Angle", "t  ", "d ");
    printf("| %7s | %15s | %15s |\n", "(deg)", "(sec)", "(m)");
    printf("+---------+-----------------+-----------------+\n");

    // loop from 0 deg to 90 deg
    for (int deg = 0; deg <= 90; deg = deg + 5)
    {
        // convert deg to rad
        double rad = degree_to_radian((double)deg);

        printf("| %7d | %15.5lf | %15.5lf |\n", deg, projectile_travel_time(rad, v), projectile_travel_distance(rad, v));
    }

    // print the dividers
    printf("+---------+-----------------+-----------------+\n");
    return;
}

/**
 * Converts degrees to radians
 */
double degree_to_radian(double d)
{
    return (d * M_PI) / 180;
}

/**
 * Calculates travelling time for the projectile for a given angle a and velocity v
 */
double projectile_travel_time(double a, double v)
{
    return ((2 * v * sin(a)) / G);
}

/**
 * Calculates travelling distance for the projectile for a given angle a and velocity v
 */
double projectile_travel_distance(double a, double v)
{
    return ((v * v * sin(2 * a)) / G);
}
