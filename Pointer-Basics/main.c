/*
    Author: Matt Johnson
    Subject: pointers
    Purpose: program creates, initializes, assigns, and accesses pointers
    Date: 02/21/2023

    Instructions:

        1. write a program that creates an integer variable with a hard-coded
           value. assign that variable's address to a pointer variable
        2. display as output the address of the pointer, the value of the pointer,
           and the value of what the pointer is pointing to
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int num = 150;
    int *pnum = NULL;

    pnum = &num;

    // note: hexadecimal numbers change because of Random Access Memory (RAM)
    printf("num address is: %p\n", &num);                       // hexadecimal number/same hexadecimal number as pnum
    printf("pnum address is: %p\n", &pnum);                     // hexadecimal number
    printf("value of pnum: %p\n", pnum);                        // address of num/same hexadecimal number as num
    printf("value of what pnum is pointing to: %d\n", *pnum);   // value of num

    return 0;
}
