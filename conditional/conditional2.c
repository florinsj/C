// Learning C
// Florin S

// conditional (ternar) operator
//assign conditional (ternar) operator  to a variable
#include <stdio.h>
int main()
{

    int a = 5, b;
    b = ((a == 5) ? (3) : 2); //conditional(ternar) operator

    printf("The value of 'b' variable is: %d", b);

    return 0;
}