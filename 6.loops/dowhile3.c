// Learning C
// Florin S

// do while  loop
// print table for a given number
#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i = 1, number = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    do
    {
        printf("%d\n", (number * i));
        i++;
    } while (i <= 10);

    return 0;
}