// Learning C
// Florin Stanciu

// Recursion in C

/* Recursion = process wich comes into existence when a function calls a copy of itself 
                to work on a smaller problem */

/* Any function wich calls itself is called recursive function and the calls=recursive calls */

// it is important to impose a termination condition
// generaly, iterative solution are more efficient than recursion
// problems suited to be solved by recursion : tower of Hanoi, Fibonacci , factorial

// memory allocation    - each recursiv call creates a new copy of the that method in memory
//                      - one some data is returned by the method, the copy is removed from memory

//example - memory allocation

#include <stdio.h>

int display(int);
void main()
{
    printf("%d", display(4));
    //all the stack are maintained wich prints the correponding value of n until n becomes 0
    // once the termination condition is reached,the stacks get destroyes one by one returning 0
}
int display(int n)
{
    if (n == 0)
        return 0;
    else
    {
        printf("%d, ", n);
        return display(n - 1);
    }
}
