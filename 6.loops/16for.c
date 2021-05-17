// Learning C
// Florin S

// for  loop
// sintax -->    for (expr1,expr2,expr3) { }
// infinite loop - method1

#include <stdio.h>
int main()
{
    int i;
    for (i = 0;; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}