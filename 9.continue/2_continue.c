// Learning C
// Florin S

// continue statement
// continue statement brings the control of the begining of the loop
// continue statement skip current iteration and continue with the next iteration

#include <stdio.h>
int main()
{
    int i = 1;
    for (i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            continue; //go to begin of the loop --> go to the next iteration
        }
        printf("%d\n", i);
    }

    return 0;
}