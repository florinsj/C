// C supports a number of ways for taking user input
// getchar() - return the value of the next single character input

// gets() function is used to read input as an unordered sequence of characters, also called a string
// In C a string is stored in a char array

#include <stdio.h>
int main()
{
    char a[100];
    gets(a);
    printf("you entered : %s", a);

    return 0;
}