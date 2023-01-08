#include <stdio.h>
#include <stdlib.h>

int main() 
{

    int apples = 12;
    int *ptr = &apples;
    void *void_ptr = &apples;

    // Indirection to GET the value of apples
    int num_1 = *ptr;

    // Indirection to SET the value of apples
    *ptr = 6;
    (*ptr)++;

    int num_2 = *ptr * 5;

    printf("The value of num_1 is: %d\n", num_1);
    printf("The value of num_2 is: %d\n", num_2);

    // Cast pointer to int pointer in order to get the value of apples
    int num_3 = *((int *)void_ptr);
    printf("The value of num_3 is: %d\n", num_3);

    return 0;
}