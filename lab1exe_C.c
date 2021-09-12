/*
 * File Name:               lab1exe_C.c
 * Course:                  ENSF 614 - Fall 2021
 * Lab # and Assignment #:  Lab 1 Exercise C
 * Lab section:             B01
 * Completed by:            Bhavyai Gupta
 * Submission Date:         NA
 */

#include <stdio.h>

int main(void)
{
    int foo;
    int bar;
    int *fred;
    int *sam;

    /* point one */
    bar = 100;
    foo = 200;
    fred = &foo;
    printf("point one: foo is %d and bar is %d.\n", foo, bar);

    /* point two */
    sam = &bar;
    *sam += 30;
    *fred -= 40;
    printf("point two: foo is %d and bar is %d.\n", foo, bar);

    /* point three */
    fred = &bar;
    *fred += 5;
    printf("point three: foo is %d and bar is %d.\n", foo, bar);
    printf("point three: *fred is %d and *sam is %d.\n", *fred, *sam);

    /* point four */
    sam = &foo;
    *sam = *fred;
    printf("point four: foo is %d and bar is %d.\n", foo, bar);

    /* point five */
    *sam *= 100;
    sam = fred;
    printf("point five: foo is %d and bar is %d.\n", foo, bar);
    printf("point five: *fred is %d and *sam is %d.\n", *fred, *sam);

    return 0;
}
