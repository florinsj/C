// Learning C
// Florin S

// break statement
// break with while
#include <stdio.h>
void main()
{
    int i = 0;
    while (1)
    {
        printf("\n%d", i);
        i++;
        if (i == 10)
        {
            break;
        }
    }
    printf("\ncame out from while loop i=%d", i);
}
