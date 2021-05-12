// Learning C
// Florin S

// while  loop  (pre-tested condition)
// infinite loop

#include <stdio.h>
void main()
{
    int x = 10, y = 2;
    while (x + y - 1) // always =!0 --> infinite loop <==> while (any nonzero value)
    {

        printf("%d %d", x--, y--);
    }
}