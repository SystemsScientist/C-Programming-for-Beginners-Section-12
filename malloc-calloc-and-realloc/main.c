/*
    Author: Matt Johnson
    Subject: pointers
    Purpose: initialize and reallocate memory data
    Date: 03/27/2023
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

    char *str = NULL;

    // initialize memory allocation
    str = (char *) malloc(15 * sizeof(char)); // sizeof provides portability
    strcpy(str, "matthew");
    printf("String = %s, Address = %p\n", str, str);

    // reallocates memory
    str = (char *) realloc(str, 25 * sizeof(char)); // sizeof provides portability
    strcat(str, ".com");
    printf("String = %s, Address = %p\n", str, str);

    free(str);

    return 0;
}
