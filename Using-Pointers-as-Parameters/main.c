/*
    Author:  Matt Johnson
    Subject: pointers (challenge)
    Purpose: program uses pointers to compute the square
             of a number (pass-by-reference)
    Date:    01/21/2023

    Instructions:

        1. write a function that squares a number by itself
            - the function should define as a parameter an int
              pointer
*/

#include <stdio.h>
#include <stdlib.h>

void compute_square(int * const x);

int main() {

    int num = 9;

    compute_square(&num);
    printf("The square of the given number is %d.\n", num);

    return 0;
}

// Note: const is redundant, i.e., we don't need it
void compute_square(int * const x) {

    *x = (*x) * (*x);
}
