// Learning C
// Florin S

// continue statement
// continue statement brings the control of the begining of the loop
// continue statement skip current iteration and continue with the next iteration

#include <stdio.h>
void main()
{
    int num = 5;
    while (num > 0)

    {
        num--;
        if (num == 3)
            continue;
        printf("\n%d", num);
    }
}