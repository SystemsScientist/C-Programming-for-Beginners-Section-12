/*
    Author: Matt Johnson
    Subject: pointers
    Purpose: program uses pointer notation
    Date: 02/25/2023
*/

#include <stdio.h>
#include <stdlib.h>

int array_sum(int *array, const int n);

int main(void) {

    int values[10] = {3, 7, -9, 3, 6, -1, 7, 9, 1, -5};
    printf("The sum is %i\n", array_sum(values, 10));

    return 0;
}

int array_sum(int *array, const int n) {

    int sum = 0;
    int * const array_end = array + n;

    for (; array < array_end; ++array)
        sum += *array;

    return sum;
}
