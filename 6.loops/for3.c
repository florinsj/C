// Learning C
// Florin S

// for  loop
// sintax -->    for (expr1,expr2,expr3) { }

// initialize more than one variable in expr1

#include <stdio.h>
int main()
{
    int a, b, c;
    for (a = 0, b = 12, c = 23; a < 2; a++)
    {
        printf("%d\n", a + b + c);
    }

    return 0;
}