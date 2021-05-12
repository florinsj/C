// Learning C
// Florin S

// while  loop  (pre-tested condition)
// print table for a given number

#include <stdio.h>
int main()
{
    int i = 1, number = 0;
    printf("Enter a nuber: ");
    scanf("%d", &number);
    while (i <= 10)
    {
        printf("%d\n", (i * number));
        i++;
    }
}