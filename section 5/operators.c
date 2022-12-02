#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

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

void logical_operators()
{
    // OPERATOR + BOOLEAN ALGEBRA + BOOLEAN SYMBOL
    // &&       | AND             | ⋀
    // ||       | OR              | ∨
    // !        | NOT             | ¬

    return;
}

void bitwise_operators()
{
    // A << N -> A * 2^N
    // 1 << 0 -> 1 (A)
    // 1 << 1 -> 2 (A * 2)
    // 1 << 2 -> 4 (A * 2 * 2)
    // 1 << 3 -> 8 (A * 2 * 2 * 2)

    // A >> N -> A / 2^N
    // 1 >> 0 -> 1 (A)
    // 1 >> 1 -> 2 (A / 2)
    // 1 >> 2 -> 4 (A / 2 / 2)
    // 1 >> 3 -> 8 (A / 2 / 2 / 2)

    /**
     * type: uint8_t
     * 
     * A = 12 ---> 0000 1100
     * B =  5 ---> 0000 0101
     * 
     * A & B  ---> 0000 0100 = 4
     * A | B  ---> 0000 1101 = 13
     * A ^ B  ---> 0000 1001 = 9
     * A << 1 ---> 0001 1000 = 24
     * A >> 1 ---> 0000 0110 = 6
     *  
     */

    uint8_t a = 12;
    uint8_t b = 5;

    printf("A = %u\n", a);
    printf("B = %u\n", b);
    printf("\n");

    printf("A & B  = %u\n", a & b);
    printf("A | B  = %u\n", a | b);
    printf("A ^ B  = %u\n", a ^ b);

    printf("A << 1 = %u\n", a << 1U);
    printf("A >> 1 = %u\n", a >> 1U);
}

int main()
{
    // calculator_int();
    // calculator_float();
    // unary_operators_float();
    // unary_operators_int();
    // relational_operators();
    // logical_operators();
    bitwise_operators();

    return 0;
}
