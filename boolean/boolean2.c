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