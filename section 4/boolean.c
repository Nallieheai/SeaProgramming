#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    // Before C99
    int ancient_a = 1; // true
    int ancient_b = 0; // false

    // After C99 include stdbool.h
    bool modern_a = true; // 1
    bool modern_b = false; // 0

    printf("ancient_a (true): %d\n", ancient_a);
    printf("ancient_b (false): %d\n", ancient_b);

    printf("modern_a (true): %d\n", modern_a);
    printf("modern_b (true): %d\n", modern_b);

    return EXIT_SUCCESS; // EXIT_SUCCESS is the same as returning 0
}

