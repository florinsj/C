// Learning C
// Florin S

// conditional (ternar) operator
//assign conditional (ternar) operator  to a variable
#include <stdio.h>
int main()
{
    int y;
    int x = 3;
    y = (x > 5) ? 5 : x;

    printf("y=%d\n", y);

    return 0;
}