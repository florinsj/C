// Learning C
// Florin Stanciu

// Recursion in C

/* Recursion = process wich comes into existence when a function calls a copy of itself 
                to work on a smaller problem */

/* Any function wich calls itself is called recursive function and the calls=recursive calls */

// it is important to impose a termination condition
// generaly, iterative solution are more efficient than recursion
// problems suited to be solved by recursion : tower of Hanoi, Fibonacci , factorial

// example - Fibonacci series

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