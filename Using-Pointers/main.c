/*
    Author: Matt Johnson
    Subject: pointers
    Purpose: program demonstrates pointers
    Date: 02/21/2023
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    // initialize variables
    long num1 = 0L;
    long num2 = 0L;
    long *pnum = NULL;

    // display print statement to see that NULL is nothing
    // and program will display nothing - zero will also
    // display nothing, but zero is nothing in this case
    // see using_pointers.txt for further documentation
    // and references
    // printf("*pnum = %ld\n", *pnum);

    // follow and display operations
    pnum = &num1;                   // get address of num1
    printf("pnum = %p\n", &pnum);

    *pnum = 2L;                     // set num1 to 2
    printf("*pnum = %ld\n", *pnum);

    ++num2;                         // increment num2
    printf("num2 = %ld\n", num2);

    num2 += *pnum;                  // add num1 to num2
    printf("num2 = %ld\n", num2);

    pnum = &num2;                   // get address of num2
    printf("pnum = %p\n", &pnum);

    ++*pnum;                        // increment num2 indirectly
    printf("*pnum = %ld\n", *pnum);

    // display output of operations
    printf("\nnum1 = %ld\n", num1);
    printf("num2 = %ld\n", num2);
    printf("pnum = %ld\n", *pnum);
    printf("*pnum + num2 = %ld\n", *pnum + num2);

    return 0;
}
