#include <stdio.h>
#include <stdlib.h>

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

    sum();
    return 0;
}