// C supports a number of ways for taking user input
// getchar() - return the value of the next single character input

// gets() function is used to read input as an unordered sequence of characters, also called a string
// In C a string is stored in a char array

// scanf() function scans input that matches format specifiers
// scanf() stops reading as soon as it encounters a space

#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers:");
    scanf("%d %d", &a, &b);
    printf("\n The sum is: %d ", (a + b));

    return 0;
}