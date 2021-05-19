// Learning C
// Florin S

// infinite loop
// unintentional infinite loop -by mistake3 - wrong loop condition

#include <stdio.h>

int main()
{
    int i = 0;
    for (i = 1; i >= 0; i++) // wrong for condition cause infinite loop
    {
        printf("Hello\n");
    }

    return 0;
}