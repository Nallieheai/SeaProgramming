#include <stdio.h>
#include <stdlib.h>

typedef enum
{
    NONE,
    LOW = 5,
    MEDIUM = 9,
    HIGH = 12,
    MAXIMUM = 20
} Thrust;

int main()
{
    Thrust thrustLevel = NONE;
    printf("Thrust level set to none (%d)\n", thrustLevel);

    thrustLevel = MAXIMUM;
    printf("Thrust level set to maximum, ready to take off! (%d)\n", thrustLevel);

    thrustLevel = MEDIUM;
    printf("Thrust level set to medium, entering the ionosphere! (%d)\n", thrustLevel);

    thrustLevel = LOW;
    printf("Thrust level set to low, traveling to deep space! (%d)\n", thrustLevel);

    return 0;
}