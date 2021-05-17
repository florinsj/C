// Learning C
// Florin S

// infinite loop
// unintentional infinite loop -by mistake5  -- wrong using of floating po=point values

#include <stdio.h>
int main()
{
    {
        float x = 3.0;
        while (x != 4.0)
        // forever true --> loop --> because pc represents floating point 4.0 as 3.9999.. or 4.00001 etc
        {
            printf("x=%f\n", x);
            x += 0.1;
        }
    }
    return 0;
}