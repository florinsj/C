// Learning C
// Florin S

// continue statement
// continue statement brings the control of the begining of the loop
// continue statement skip current iteration and continue with the next iteration

#include <stdio.h>
int main()
{
    int i = 1, j = 1;
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            if ((i == 2) && (j == 2))
            {
                continue; // go to next iteration of j for
            }
            printf("%d %d\n", i, j);
        }
    }

    return 0;
}