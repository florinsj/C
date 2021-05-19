// Learning C
// Florin S

// for  loop
// sintax -->    for (expr1,expr2,expr3) { }

// skip init value

#include <stdio.h>
int main()
{
    int i = 0;
    int max = 10;
    for (; i < max; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}