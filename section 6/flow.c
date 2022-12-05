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

void planetary_alignment()
{   
    // Try it with real data:
    // Earth (a): 365
    // Venus (b): 225
    // Mercury (c): 88
    
    int a, b, c;

    printf("Enter the duration of orbit A in days: ");
    scanf("%d", &a);
    printf("\n");

    printf("Enter the duration of orbit B in days: ");
    scanf("%d", &b);
    printf("\n");

    printf("Enter the duration of orbit C in days: ");
    scanf("%d", &c);
    printf("\n\n");

    printf("A -> %5d [days]\n", a);
    printf("B -> %5d [days]\n", b);
    printf("C -> %5d [days]\n\n", c);

    int max;
    max = a > b ? a : b;
    max = c > max ? c : max;

    int lcm = -1;
    const int MAX_ITER = 10000;

    for (int i = 1; i <= MAX_ITER; i++)
    {
        int mul = max * i;
        if (mul % a == 0 && mul % b == 0 && mul % c == 0) {
            lcm = mul;
            printf("Found LCM after %d iterations!\n", i);
            printf("Orbits A, B and C align every %d days!\n", lcm);
            printf("Planet A completes %d orbits.\n", lcm / a);
            printf("Planet B completes %d orbits.\n", lcm / b);
            printf("Planet C completes %d orbits.\n", lcm / c);
            break;
        }
    }

    if (lcm == -1) printf("Exceeded the maximum number of iterations!");
}

void using_goto()
{
    // __label__ cleanup;

    // goto identifier;
    // -> Immediately jump to identifier label
    // -> unconditional jump (usually placed inside the body of an if-statement)

    // Use cases: 
    // -> Breaking out of nested loops (like a tripe break if there are 3 nested loops)
    // -> alternative call nested loops in a function and then call return to exit ?

    // some status...
    // if (status == ERROR)
        // goto cleanup;
    // do something if error did not occur

    // cleanup:
    // clean up

    // DO NOT USE GOTO AS A SUBSTITUTE FOR FUNCTION CALLS
    // init:
    //     if (1) goto procedure_1;
    //     if (1) goto procedure_2;
    
    // procedure_0:
    //     if (1) goto procedure_2;
    
    // procedure_1:
    //     goto init;
    
    // procedure_2:
    //     if (0) goto procedure_0;
    return;
}

int main() 
{
    // check_number();
    // planetary_alignment();
    using_goto();
    return 0;
}