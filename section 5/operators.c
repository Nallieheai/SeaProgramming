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
    
    printf("\n");
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
    
    printf("\n");
}

void unary_operators_float()
{
    float a, b;

    // Post-increment
    a = 3.14;
    b = a++;

    printf("After post-increment:\n");
    printf("a: %.2f\n", a);
    printf("b: %.2f\n", b);

    // Pre-increment
    a = 3.14;
    b = ++a;

    printf("After pre-increment:\n");
    printf("a: %.2f\n", a);
    printf("b: %.2f\n", b);

    printf("\n");
}

void relational_operators()
{
    char a = 'a';
    char b = 'b';

    printf("A (char): %c\n", a);
    printf("B (char): %c\n", b);

    printf("\n");

    printf("A == B -> %d\n", a == b);
    printf("A != B -> %d\n", a != b);
    printf("A > B -> %d\n", a > b);
    printf("A < B -> %d\n", a < b);
    printf("A >= B -> %d\n", a >= b);
    printf("A <= B -> %d\n", a <= b);

    printf("\n");
}


void unary_operators_int()
{
    int a, b;

    // Post-increment
    a = 0;
    b = a++ * 2 + 1;

    printf("After post-increment:\n");
    printf("a: %d\n", a);
    printf("b: %d\n", b);

    // Pre-increment
    a = 0;
    b = ++a * 2 + 1;

    printf("After pre-increment:\n");
    printf("a: %d\n", a);
    printf("b: %d\n", b);

    printf("\n");
}

int main()
{
    // calculator_int();
    // calculator_float();
    // unary_operators_float();
    // unary_operators_int();
    relational_operators();

    return 0;
}
