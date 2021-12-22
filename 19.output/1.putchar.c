// in C we can generate outputs in different ways

// putchar() - outputs a single character

#include <stdio.h>
int main()
{
    char a = getchar();
    printf("you entered: ");
    putchar(a);
    return 0;
}