#include <stdio.h>
int fibo(int);

void main()
{
    int n;
    printf("Enter a number to calculate fibonacci series\n");
    scanf("%d", &n);
    printf("the fibonacci series is: %d", fibo(n));
}

int fibo(int n)
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
        return fibo(n - 1) + fibo(n - 2);
    }
}