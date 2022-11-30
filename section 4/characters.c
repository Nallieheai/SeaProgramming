#include <stdio.h>
#include <stdlib.h>

int main()
{
    // The char type can be unsigned
    char character = 'A'; // 1 Byte -> 8 Bit signed integer; -128 -> 127
    char swedish_char = -103;
    unsigned special_char = 128;
    printf("%c = %d\n", character, character);
    printf("%c = %d\n", swedish_char, swedish_char);
    printf("%c = %d\n", special_char, special_char);

    printf("Please input a character: ");
    char user_char = getchar(); // getchar() reads characters from the stdin buffer, call again to get the next characters

    printf("You inserted the character %c which has the ASCII encoding: %d", user_char, user_char);

    return EXIT_SUCCESS; // EXIT_SUCCESS is the same as returning 0
}

