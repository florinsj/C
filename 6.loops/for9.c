// Learning C
// Florin S

// for  loop
// sintax -->    for (expr1,expr2,expr3) { }
// multiple param in expression3
#include <stdio.h>
int main()
{
    int i = 0, j = 2;
    for (i = 0; i < 5; i++, j += 2)
    {
        printf("%d  %d\n", i, j);
    }
    return 0;
}