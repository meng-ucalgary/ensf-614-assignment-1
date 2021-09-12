/*
 * File Name:               lab1exe_D1.c
 * Course:                  ENSF 614 - Fall 2021
 * Lab # and Assignment #:  Lab 1 Exercise D Part One
 * Lab section:             B01
 * Completed by:            Bhavyai Gupta
 * Submission Date:         NA
 */

#include <stdio.h>

void foo(int *a, int *b);

int main(void)
{
    int x = 1000;
    int y = 2000;
    int *p;
    p = &y;
    foo(p, &x);
    printf("x is %d, y is %d.\n", x, y);
    return 0;
}

void foo(int *a, int *b)
{
    *a += 10;
    *b += 20;

    /* point one */
    *b += 1;
}
