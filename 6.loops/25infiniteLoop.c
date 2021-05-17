// Learning C
// Florin S

// infinite loop
// macros
#include <stdio.h>
#define infinite for (;;) // we define a macro with name = "infinite" and value= "for(;;)"
int main()
{
    infinite
    {
        printf("hello");
    }
    return 0;
}