#include <stdio.h>
#include <stdlib.h>

int main()
{
    int boys = 15;
    int girls = 12;
    int students = boys + girls;

    printf("There are %d boys in the class!\n", boys);
    printf("There are %d girls in the class!\n", girls);
    printf("There are %d students in the class!\n", students);

    return EXIT_SUCCESS;
}