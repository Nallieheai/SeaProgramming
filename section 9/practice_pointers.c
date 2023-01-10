#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
    char a = 'A';
    char *ptr = &a;

    printf(" 1 | %c, %c, %llu, 0x%llX\n", a, *ptr, (uint64_t) ptr, (uint64_t) ptr);

    char b = 'B';
    ptr = &b;

    printf(" 2 | %c, %c, %llu, 0x%llX\n", b, *ptr, (uint64_t) ptr, (uint64_t) ptr);

    *ptr = 'C';

    printf(" 3 | %c, %c, %llu, 0x%llX\n", b, *ptr, (uint64_t) ptr, (uint64_t) ptr);

    (*ptr)++;

    printf(" 4 | %c, %c, %llu, 0x%llX\n", b, *ptr, (uint64_t) ptr, (uint64_t) ptr);

    unsigned int x = 'A';
    ptr = (char *) &x;

    printf(" 5 | %u, %c, %llu, 0x%llX\n", x, *ptr, (uint64_t) ptr, (uint64_t) &x);

    unsigned int y = 'B';
    ptr = (char *) &y;

    printf(" 6 | %u, %c, %llu, 0x%llX\n", y, *ptr, (uint64_t) ptr, (uint64_t) &y);

    *ptr = 'C';

    printf(" 7 | %u, %c, %llu, 0x%llX\n", y, *ptr, (uint64_t) ptr, (uint64_t) &y);

    (*ptr)++;

    printf(" 8 | %u, %c, %llu, 0x%llX\n", y, *ptr, (uint64_t) ptr, (uint64_t) &y);

    x = 0xABCD1234;
    ptr = (char *) &x;

    // Because the x value is a 4-byte unsigned integer, the print below using %c (char) only prints 1 byte; hence 34
    printf(" 9 | 0x%X, 0x%X, %c, 0x%llX\n", x, *ptr, *ptr, (uint64_t) ptr);

    *ptr = 'C';
    
    // Only the first byte is altered and the next 3 bytes are untouched: 0xABCD1234 -> 0xABCD1243 (43 = C)
    printf("10 | %u, 0x%X, 0x%X, %c, 0x%llX\n", x, x, *ptr, *ptr, (uint64_t) ptr);

    unsigned int *uint_ptr = (unsigned int *) ptr;
    *uint_ptr = 'C';

    printf("11 | %u, 0x%X, 0x%X, %c, 0x%llX\n", x, x, *ptr, *ptr, (uint64_t) ptr);

    return 0;
}
