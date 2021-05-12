// Learning C
// Florin S

// for  loop
// sintax -->    for (expr1,expr2,expr3) { }
#include <stdio.h>
int main()
{
    int i;                  //declare i
    for (i = 0; i < 5; i++) // we must initialize i, because is not initialized
    {
        printf("%d\n", i);
    }

    return 0;
}