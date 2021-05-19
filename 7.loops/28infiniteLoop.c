// Learning C
// Florin S

// infinite loop
// unintentional infinite loop -by mistake2

#include <stdio.h>

int main()
{
    char ch = 'n';
    while (ch = 'y') // here mistake --> we have to use  == instead of =
    {
        printf("Hello\n");
    }

    return 0;
}