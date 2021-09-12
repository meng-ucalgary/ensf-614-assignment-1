/*
 * File Name:               lab1exe_D2.c
 * Course:                  ENSF 614 - Fall 2021
 * Lab # and Assignment #:  Lab 1 Exercise D Part Two
 * Lab section:             B01
 * Completed by:            Bhavyai Gupta
 * Submission Date:         NA
 */

#include <stdio.h>

void bar(int *a, int *b);

void quux(int *p, int *q);

int main(void)
{
    int x = 500, y = 600;
    quux(&x, &y);
    printf("x is %d, y is %d.\n", x, y);
    return 0;
}

void bar(int *a, int *b)
{
    *a += 3;
    *b += 4;

    /* point one */

    printf("*a is %d, *b is %d.\n", *a, *b);
}

void quux(int *p, int *q)
{
    int n;
    n = *p;
    bar(&n, q);
    printf("*p is %d, *q is %d.\n", *p, *q);
}
