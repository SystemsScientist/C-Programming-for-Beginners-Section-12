/*
    Author: Matt Johnson
    Subject: pointers
    Purpose: program computes the length of a string
    Date: 03/16/2023

    Instructions:

        1. write a function that calculates the length of a string
            - function should take a const char pointer as a parameter
            - function can only determine the length of the string
              using pointer arithmetic
                + incrementation operator (++pointer) to get to the end
                  of the string
            - use a while loop using the value of the pointer to exit
            - function should subtract two pointers (one pointing to
              the end of the string and one pointing to the beginning
              of the string
            - function should return an int that is the length of the
              string passed into the function
*/

#include <stdio.h>
#include <stdlib.h>

int compute_string_length(const char *string);

int main(void) {

    printf("Length of string is: %d \n", compute_string_length("string_length test"));  // length is 18
    printf("Length of string is: %d \n", compute_string_length(""));                    // length is 0
    printf("Length of string is: %d \n", compute_string_length("matthew"));             // length is 7

    return 0;
}

int compute_string_length(const char *string) {

    const char *last_address = string;

    while (*last_address)
        ++last_address;

    return last_address - string;
}
