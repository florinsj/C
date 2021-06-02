// Learning C
// Florin Stanciu

// Recursion in C

/* Recursion = process wich comes into existence when a function calls a copy of itself 
                to work on a smaller problem */

/* Any function wich calls itself is called recursive function and the calls=recursive calls */

// it is important to impose a termination condition
// generaly, iterative solution are more efficient than recursion
// problems suited to be solved by recursion : tower of Hanoi, Fibonacci , factorial

// example - factorial using recursion

#include <stdio.h>

int factorial(int);
void main()
{
    int n;
    printf("Enter the value of number whose factorial you want to calculate?");
    scanf("%d", &n);
    printf("%d factorial is: %d", n, factorial(n));
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