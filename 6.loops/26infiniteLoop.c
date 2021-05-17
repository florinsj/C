// Learning C
// Florin S

// infinite loop
// get out (break) from the loop
#include <stdio.h>
#define infinite for (;;) // we define a macro with name = "infinite" and value= "for(;;)"
int main()
{
    char ch;
    while (1)

    {
        ch = getchar();
        if (ch == 'n')
        {
            break;
        }
        printf("Hello\n");
    }
    return 0;
}