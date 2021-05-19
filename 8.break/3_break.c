// Learning C
// Florin S

// break statement
// break with nested loop
#include <stdio.h>
int main()
{
    int i = 1, j = 1;
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            printf("\n%d & %d", i, j);
            if ((i == 2) && (j == 2))
            {
                break;
            }
        }
    }
    return 0;
}