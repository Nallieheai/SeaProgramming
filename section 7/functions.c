#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
    A function can be used to execute an action, e.g. printf("abc")
    A function can be used to obtain a result, e.g. letter = toLower('A')
    A function can be used to change something, e.g. increment(&counter) 

    return type at the end of the function is automatically casted to the return type
    example: 

    int main() {
        return '0'; => return (int) '0';
    }

    function decalaration can be used to make code easier to read
    int sum(int a, int b);

    // At this point the compiler wouldnt know what sum() is unless it was decalared before the main function
    int main() { 
        int retval = sum(5, 2);
        return 0;
    }

    int sum(int a, int b) {
        ...
    }
*/

int main() 
{
    int a = 5;

    if (true) {
        a += 5;
        printf("The value of a is: %d\n", a);

        int b = 4;
    }

    // This line of code cant be executed becasue the variable b is
    // initialized inside of the if-statement, therefore it is outside
    // of our current scope.
    // printf("The value of a is: %d\n", b);

    // Visibility rules:
    // A local variable hides a global variable
    // A block variable hides local & global variables

    return 0;
}