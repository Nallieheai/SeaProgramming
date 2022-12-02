#include <stdio.h>
#include <stdlib.h>

void calculator_int()
{
    int a, b, c;

    printf("Enter operand A (int): ");
    scanf("%d", &a);
    printf("\n");

    printf("Enter operand B (int): ");
    scanf("%d", &b);
    printf("\n");

    c = a + b;
    printf("C = A + B -> %d\n", c);

    c = a - b;
    printf("C = A - B -> %d\n", c);
    
    c = a * b;
    printf("C = A * B -> %d\n", c);

    c = a / b;
    printf("C = A / B -> %d\n", c);

    c = a + b;
    printf("C = A + B -> %d\n", c);

    c = a % b;
    printf("C = A %% B -> %d\n", c);
    
}

void calculator_float()
{
    float a, b, c;

    printf("Enter operand A (float): ");
    scanf("%f", &a);
    printf("\n");

    printf("Enter operand B (float): ");
    scanf("%f", &b);
    printf("\n");

    c = a + b;
    printf("C = A + B -> %f\n", c);

    c = a - b;
    printf("C = A - B -> %f\n", c);
    
    c = a * b;
    printf("C = A * B -> %f\n", c);

    c = a / b;
    printf("C = A / B -> %f\n", c);

    c = a + b;
    printf("C = A + B -> %f\n", c);

    c = (int) a % (int) b;
    printf("C = A %% B -> %f\n", c);
    
}

int main()
{
    // calculator_int();
    calculator_float();

    return 0;
}
