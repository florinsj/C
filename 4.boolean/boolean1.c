// Learning C
// Florin S

// In C we don't have a native type for boolean
// in C   1 means true and 0 means false
// for using "true" and "false" values  we must include stdbool.h library wich implements bool type

#include <stdio.h>
#include <stdbool.h>

int main()
{

    bool x = false;
    if (x == true)
    {
        printf("x is true");
    }
    else
        printf("x is false");
    return 0;
}