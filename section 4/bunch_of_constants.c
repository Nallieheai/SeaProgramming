#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int moonLanding = 1969;
    const double speedOfLight = 299792458.;
    const double pi = 3.14159;
    const unsigned hexDead = 0xDEADu;
    const unsigned hexSecret = 51966u;

    printf("Moon landing:\n %10d\n %010d\n\n", moonLanding, moonLanding);
    printf("Speed of light:\n %.0f\n %.3e\n\n", speedOfLight, speedOfLight);
    printf("Pi:\n %.2f\n %+.1e\n\n", pi, pi);
    printf("Hex dead:\n 0x%x\n %6u\n\n", hexDead, hexDead);
    printf("Hex secret:\n %x\n\n", hexSecret);

    return 0;
}