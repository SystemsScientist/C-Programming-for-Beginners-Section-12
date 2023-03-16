/*
    Author: Matt Johnson
    Subject: pointers
    Purpose:
    Date: 03/16/2023
*/

#include <stdio.h>
#include <stdlib.h>

void swap(int x, int y);

int main(void) {

    // local variables
    int a = 100;
    int b = 200;

    printf("Before swap, value of a: %d\n", a);
    printf("Before swap, value of b: %d\n\n", b);

    // call function to swap the values
    swap(a, b);

    printf("After swap, value of a: %d\n", a);
    printf("After swap, value of b: %d\n", b);

    return 0;
}

void swap(int x, int y) {

    int temp;

    temp = x;   // save value of x
    x = y;      // put y into x
    y = temp;   // put temp into y
}
