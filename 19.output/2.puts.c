// in C we can generate outputs in different ways

// putchar() - outputs a single character

// puts() function is used to display output as a string (string is stored in a char array)

#include <stdio.h>
int main()
{
    char a[100];
    gets(a);
    printf("you entered: ");
    puts(a);
    return 0;
}