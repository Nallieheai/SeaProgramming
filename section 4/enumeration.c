#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

enum menu
{
    MILK, // 0
    TEA = 14,
    COFFEE = 23,
    JUICE = 32,
    BEER, // Automatically gets 33
    SODA = 40
};

enum months
{
    JAN = 1,
    FEB,
    MAR,
    APR,
    MAY,
    JUN,
    JUL,
    AUG,
    SEP,
    OCT,
    NOV,
    DEC
};

int main()
{
    enum menu mario = COFFEE;
    enum menu emil = MILK;
    enum menu steve = JUICE;

    printf("Mario ordered: %d\n", mario);
    printf("Emil ordered: %d\n", emil);
    printf("Steve ordered: %d\n", steve);

    enum months myFavouriteMonth = MAR;
    enum months MyLeastFavouriteMonth = 10;

    printf("My favourite month is: %d\n", myFavouriteMonth);
    printf("My least favourite month is: %d\n", MyLeastFavouriteMonth);

    return EXIT_SUCCESS;
}
