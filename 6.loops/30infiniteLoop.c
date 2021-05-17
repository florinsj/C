// Learning C
// Florin S

// infinite loop
// unintentional infinite loop -by mistake4  -- wrong using of "break" keyword in nested loops

#include <stdio.h>

int main()
{
    int i = 0;
    while (1) // infinite loop
    {
        for (i = 1; i <= 10; i++)
        {
            if (i % 2 == 0)
            {
                break;
            }
        }
    }

    return 0;
}