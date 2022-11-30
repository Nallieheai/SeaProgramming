#include <stdio.h>
#include <stdlib.h>

int main()
{
    float pi1 = 3.14;
    double pi2 = 3.14;
    double pi3 = 314e-2; // 314 * 10 ^ -2 = 3.14

    // %[width][.precision]specifier (f / e)
    printf("Pies: %f, %f, %e\n", pi1, pi2, pi3);

    double decimalDigits = 1.23456789;
    double worldPopulation = 7.801e9;
    double plankConstant = 6.626e34;

    printf("%50.3f (decimalDigits)\n", decimalDigits);
    printf("%50.1f (worldPopulation)\n", worldPopulation);
    printf("%50.3e (plankConstant e)\n", worldPopulation);
    printf("%50.1f (plankConstant)\n", plankConstant);
    printf("%50.3e (plankConstant e)\n", plankConstant);

    return EXIT_SUCCESS; // EXIT_SUCCESS is the same as returning 0
}
 