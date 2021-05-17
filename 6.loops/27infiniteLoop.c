// Learning C
// Florin S

// infinite loop
// unintentional infinite loop -by mistake1

#include <stdio.h>

int main()
{
    int i = 1;
    while (i <= 10)
        ; // here ";" is mistake   -->unintentional infinite loop

    {
        printf("%d", i);
        i++;
    }
    return 0;
}