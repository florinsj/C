// Learning C
// Florin S

// goto statement
// goto  statement   jump to a statement
// it is used to repeat some part of code , to break multiple loops
// these days goto is avoided because makes the program complicated, less readable

#include <stdio.h>
int main()
{
    int num, i = 1;
    printf("Enter the number whose table you want to print?");
    scanf("%d", &num);
table:
    printf("%d x %d=%d\n", num, i, (num * i));
    i++;
    if (i <= 10)
    {
        goto table;
    }
}