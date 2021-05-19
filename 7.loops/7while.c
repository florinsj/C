// Learning C
// Florin S

// while  loop  (pre-tested condition)
//

#include <stdio.h>
int main()
{
    int j = 1;
    while (j += 2, j <= 10)
    {
        printf("%d\n", j);
    }
    printf("After while j=%d\n", j);
    return 0;
}