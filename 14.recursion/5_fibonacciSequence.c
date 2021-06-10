// Learning C
// Florin Stanciu

// Recursion in C

/* Recursion = process wich comes into existence when a function calls a copy of itself 
                to work on a smaller problem */

/* Any function wich calls itself is called recursive function and the calls=recursive calls */

// it is important to impose a termination condition
// generaly, iterative solution are more efficient than recursion
// problems suited to be solved by recursion : tower of Hanoi, Fibonacci , factorial

// example - Fibonacci sequence

#include <stdio.h>
int fibo(int);

void main()
{
    int n;
    printf("Enter the number up to which to calculate the number of Fibbonaci: \n");
    scanf("%d", &n);
    printf("The number of Fibonacci is: %d\n", fibo(n));
    int i;
    printf("The Fibonacci sequence is: ");
    for (i = 0; i <= n; i++)
    {
        printf("%d ", fibo(i));
    }
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