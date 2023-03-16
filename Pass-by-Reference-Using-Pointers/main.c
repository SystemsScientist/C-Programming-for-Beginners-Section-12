/*
    Author: Matt Johnson
    Subject: pointers
    Purpose: program swaps values via pointers
    Date: 03/16/2023
*/

#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y);

int main(void) {

    // local variables
    int a = 100;
    int b = 200;

    printf("Before swap, value of a: %d\n", a);     // value equals 100
    printf("Before swap, value of b: %d\n\n", b);   // value equals 200

    swap(&a, &b);

    printf("After swap, value of a: %d\n", a);      // value equals 200
    printf("After swap, value of b: %d\n", b);      // value equals 100

    return 0;
}

void swap(int *x, int *y) {

    int temp;

    temp = *x;      // save value at address x
    *x = *y;        // put y into x
    *y = temp;      // put temp into y
}
