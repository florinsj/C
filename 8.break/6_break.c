// Learning C
// Florin S

// break statement

#include <stdio.h>
int main()
{
    int num = 5;
    while (num > 0)
    {
        if (num == 3)
        {
            break;
        }
        printf("%d\n", num);
        num--;
    }
    return 0;
}