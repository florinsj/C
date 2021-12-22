// in C we can generate outputs in different ways

// putchar() - outputs a single character

// puts() function is used to display output as a string (string is stored in a char array)

// printf() sends formatted output
// Format tags prototype is %[flags][width][.precision][length]specifier
// ex. printf("%d",number)   %d  - decimal
// ex.printf("%f",floatNumber)   %f - float
// ex.printf("%2.2f",floatNumber)   %f - float  2digit decimal part and 2 digit fractional part

#include <stdio.h>

int main()
{
    char c = 'a';
    int b = 1;
    int a = 2;
    float f = 4.54;
    printf("%d ", b);
    printf("\n %c", c);
    printf("\n %2.2f", f);
    printf("Sum of a and b is : %d ", (a + b));
    return 0;
}
