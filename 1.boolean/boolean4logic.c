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
    bool y = true;
    printf("The value of x AND y is %d", x && y);
    printf("\nThe value of x OR y is %d", x || y);
    printf("\nThe value of NOT x is %d", !x);

    return 0;
}