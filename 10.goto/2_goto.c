
// Learning C
// Florin S

// goto statement
// goto  statement   jump to a statement
// it is used to repeat some part of code , to break multiple loops
// these days goto is avoided because makes the program complicated, less readable

// goto statement  -- breaking multiple loops
#include <stdio.h>
int main()
{
    int i, j, k;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 3; k++)
            {
                printf("%d %d %d\n", i, j, k);
                if (j == 3)
                {
                    goto out;
                }
            }
        }
    }
out:
    printf("came out of the loop");
    return 0;
}