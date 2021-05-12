// Learning C
// Florin S

// In C we don't have a native type for boolean
// in C   1 means true and 0 means false
// for using "true" and "false" values  we must include stdbool.h library wich implements bool type
#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool b[2] = {true, false};
    int i;
    for (i = 0; i < 2; i++)
    {
        printf("%d,", b[i]);
    }
    return 0;
}