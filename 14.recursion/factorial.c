#include <stdio.h>

int factorial(int);
void main()
{
    int n;
    printf("Enter the value of n?");
    scanf("%d", &n);
    printf("%d factorial is %d", n, factorial(n));
}

int factorial(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}