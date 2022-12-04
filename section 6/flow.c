#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

void check_number()
{
    unsigned int number;
    // Check if the number is even or odd
    printf("Enter a positive integer number: ");
    scanf("%d", &number);
    printf("\n");

    if (number < 0) {
        printf("The number must be positive: %d (EXITING)\n", number);
        return;
    }

    // Can remove ternary expression because the expression itself already evaluate to true or false
    bool isEven = number % 2 == 0 ? true : false;

    if (isEven) printf("The number %d is even: %d\n", number, isEven);
    else printf("The number %d is odd: %d\n", number, isEven);
    
}

int main() 
{
    check_number();
    return 0;
}