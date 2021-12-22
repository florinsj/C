// C supports a number of ways for taking user input
// getchar() - return the value of the next single character input

#include <stdio.h>
int main()
{
    char a = getchar();
    printf("You entered :%c", a);

    return 0;
}