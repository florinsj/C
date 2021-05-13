// Learning C
// Florin S

// nested for loop
// multiplication table to a number

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int i, j;
    for (i = 1; i <= n; i++) //outer loop
    {
        for (j = 1; j <= 10; j++) //inner loop
        {
            printf("%d\t", (i * j));
        }
        printf("\n");
    }
}