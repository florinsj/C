// C supports a number of ways for taking user input
// getchar() - return the value of the next single character input

// gets() function is used to read input as an unordered sequence of characters, also called a string
// In C a string is stored in a char array

// scanf() function scans input that matches format specifiers

#include <stdio.h>
int main()
{
    int a;
    printf("Enter a: ");
    scanf("%d", &a);
    // the sign "&" is the address operator.it return the address(location) in memory, of a variable

    printf("you entered %d", a);
    return 0;
}