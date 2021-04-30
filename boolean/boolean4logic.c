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