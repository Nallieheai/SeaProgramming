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

void bitmasks() 
{
    /*
        & -> Bit Clearing   -> Mask is 0 -> result is 0
        & -> Bit Testing    -> Mask is 1 -> input pass
        | -> Bit Setting    -> Mask is 1 -> Result is 1
        ^ -> Bit Toggling   -> Mask is 1 -> Input toggle
    */

   return;
}

void bit_manipulation()
{   
    // 170
    int data = 0b10101010;

    // Setting the N:th bit (number 6)
    // result = data -> bitwise OR -> bitmap
    int result = data | (1 << 6);
    printf("Result after setting bit 6 to 1: %d -> %d\n", data, result);


    // Clearing the N:th bit (number 6)
    // result = data -> bitwise AND -> bitmap (bitwise complement; invert)
    result = data & ~(1 << 6);
    printf("Result after clearing bit 6 (1 -> 0): %d -> %d\n", data, result);


    // Selecting N bits (number 3 to 5 aka 3:5)
    // result = data -> bitwise right shift 3 -> bitwise AND with a 0b111 bitmap (to get all 3 bits no matter what)
    result = (data >> 3) & 0b111; // Shift the bits back 3 (result << 3) to get the actual value of the bits in their original place (40)
    printf("Result after selecting the 3 to 5th bit: %d -> %d\n", data, result);
}

void sizeof_operator()
{
    // Returns the size of something in bytes (known during compile time)
    // Result is an integer constant
    // The operand can be a varaible, basic, derived data type (struct) or an expression.

    printf("%llu\n", sizeof(int));
    printf("%llu\n", sizeof(long int));
    printf("%llu\n", sizeof(long long int));
    printf("%llu\n", sizeof(char));
    printf("%llu\n", sizeof(double));
    printf("%llu\n", sizeof(float));
}

void casting_and_conversions()
{
    // Integer Promotion
    char a = 0xFF; // -1
    unsigned char b = 0xFF; // 255
    int c = 0xFF;
    // This means they are not the same, so when checking if a == b they will be casted to Integer, and have different values.
    printf("Values (a & b): %d & %d, a == b (%d)\n", a, b, a == b);
    printf("Values (b & c): %d & %d, b == c (%d)\n", b, c, b == c);

    return;
}

void challenge_sphere()
{
    float radius;
    printf("Insert the radius of the sphere: ");
    scanf("%f", &radius);
    printf("\n");

    const float pi = 3.14159;
    float area = 4 * pi * (radius * radius);
    float volume = (4.0 / 3.0) * pi * (radius * radius * radius);

    printf("The area of a sphere with a radius of %f is: %.2f (%.3e)\n", radius, area, area);
    printf("The volume of a sphere with a radius of %f is: %.3f (%.3e)\n", radius, volume, volume);
}

void bit_selector() 
{
    // [0:3], [4:7], [8:11], [12:15]

    unsigned int data = 0xABCD;
    unsigned int start, end;
    printf("Please enter the start index: ");
    scanf("%u", &start);
    printf("\n");
    printf("Please enter the end index: ");
    scanf("%u", &end);
    printf("\n");

    printf("Your indicies are: %d & %d\n", start, end);

    unsigned int range = end - start + 1;
    unsigned int bitmask = (1 << range ) - 1;
    unsigned int result = (data >> start) & bitmask;

    printf("Result: 0x%04X\n", result);
}

int main()
{
    // calculator_int();
    // calculator_float();
    // unary_operators_float();
    // unary_operators_int();
    // relational_operators();
    // logical_operators();
    // bitwise_operators();
    // bit_manipulation();
    // sizeof_operator();
    // casting_and_conversions();
    // challenge_sphere();
    // bit_selector();

    return 0;
}
