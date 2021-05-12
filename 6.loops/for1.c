// Learning C
// Florin S

// for  loop
// sintax -->    for (expr1,expr2,expr3) { }
// in C you cannot declare variable i in expression

// for(int i=1,i<10,i++)  --> error

// int i=0;
// for(i=1,i<10,i++)  --> good

// printing table of 1

#include <stdio.h>
int main()
{
    int i = 0;
    for (i = 0; i <= 10; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}