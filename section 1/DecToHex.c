#include <stdio.h>
#include <stdlib.h>

/* This is the entry point of the program */
int main(void) {
    printf("Welcome to the Decimal To Hexadecimal Converter!\n");
    printf("Enter a number: \n");

    int number;
    scanf("%d", &number);

    printf("Decimal representation: %9d\n", number);
    printf("Hexadecimal representation: %9X\n", number);

    return 0;
}