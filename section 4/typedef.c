#include <stdio.h>
#include <stdlib.h>

typedef char byte;

typedef enum
{
    MONDAY = 1,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
} DayOfWeek;

int main()
{
    byte b = 0x62;
    printf("The byte value is %d and it represents the ASCII character: %c\n", b, b);

    DayOfWeek day = THURSDAY; // Using typedef lets me simply use DayOfWeek instead of "enum DayOfWeek ..."
    printf("Today is the %dth day of the week!", day);

    return EXIT_SUCCESS; // EXIT_SUCCESS is the same as returning 0
}
