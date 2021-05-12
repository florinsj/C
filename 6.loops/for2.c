// Learning C
// Florin S

// for  loop
// sintax -->    for (expr1,expr2,expr3) { }

// print table for a given number
#include <stdio.h>
int main()
{
    int number = 0;
    int i = 1;
    printf("Enter  number: ");
    scanf("%d", &number);
    for (i = 1; i <= 10; i++)
    {
        printf("%d\n", (number * i));
    }
    return 0;
}