/*
    Author: Matt Johnson
    Subject: pointers
    Purpose:
    Date: 03/28/2023

    Instructions:

        1.program allows a user to input a text string
            - program will print the text that was inputted
            - program will utilize dynamic memory allocation
        2. the user can enter the limit of the string they
           are entering
            - you can use this limit when invoking malloc
        3. program should create a char pointer only, no
           character arrays
        4. be sure to release the memory that was allocated
*/

#include <stdio.h>
#include <stdlib.h> // added for dynamic memory allocation

int main(void) {

    int size;
    char *text = NULL;

    printf("Enter limit of the text: \n");
    scanf("%d", &size);

    text = (char *) malloc(size * sizeof(char));

    // use fgets() instead of gets
    if(text != NULL) {

        printf("\nEnter some text: \n");
        scanf(" ");
        fgets(text, size, stdin);

        printf("\nInputted text is: %s\n", text);
    }

    free(text);
    text = NULL;

    return 0;
}
