#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
    // int8_t & uint8_t are from stdint.h, these are integers that are specified in size. 
    // (integers may vary in size depending on the system)
    int8_t number1 = INT8_MAX;
    uint8_t number2 = UINT8_MAX;

    // 0b can be used to assign a binary literal
    int8_t binary_literal = 0b11111111;

    // 0x can be used to assign a hex literal
    int8_t hex_literal = 0xFF;

    printf("Decimal literal: %d\n", binary_literal);
    printf("Hexadecimal format: %x\n", hex_literal);

    printf("This is the maximum number for a signed 8 bit integer: %d\n", number1);
    printf("This is the maximum number for an unsigned 8 bit integer: %d\n", number2);

    int temperature = -5;
    unsigned int age = 25u;
    unsigned long int bigNumber = 4801235ul;
    unsigned long long int worldPopulation = 7801235945ull;

    printf("The temperature is currently %d degrees!\n", temperature);
    printf("I am %u years old\n", age);

    // Adding '12' before the 'lu' or 'llu' will fill empty space with whitespaces.
    printf("This is a big number: %12lu\n", bigNumber);
    printf("The worlds population is: %12llu\n", worldPopulation);

    printf("INT32_MIN: %12d\n", INT32_MIN);
    printf("INT32_MAX: %12d\n", INT32_MAX);

    printf("INT64_MIN: %20lld\n", INT64_MIN);
    printf("INT64_MAX: %20lld\n", INT64_MAX);

    printf("UINT64_MIN: %20llu\n", 0ull);
    printf("UINT64_MAX: %20llu\n", UINT64_MAX);

    return EXIT_SUCCESS; // EXIT_SUCCESS is the same as returning 0
}
 