// C supports a number of ways for taking user input

// scanf() function scans input that matches format specifiers
// scanf() stops reading as soon as it encounters a space
// scanf() scan input according to format specifiers
// if input can't be converted,then the assignment isn't made

#include <stdio.h>
int main()
{

    int x, y;
    float num;
    char text1[20];
    char text2[20];
    printf("enter a decimal,float and a text:");
    scanf("%d %f %s", &x, &num, text1);
    printf("\nYou entered %d %f %s", x, num, text1);

    // the sign "&" is the address operator.it return the address(location) in memory, of a variable
    // the scanf places the input value at a variable adress

    // "&" sign isn't needed for a string because a string acts like a pointer

    // format specifiers :
    // %[*][max_field]conversion character
    // the optional * will skip the input field
    // max_field = maximum number of characters to assign to an input field

    // conversion charactes converts the argument(if necessary) to a type:
    // %d -decimal
    // %c -character
    // %s -string
    // %f -float
    // %x -hexadecimal

    // format specifiers are used to assign values to corresponding arguments after the control string

    printf("\nenter a decimal,decimal and a text:");
    scanf("%d %2d %*f  %5s", &x, &y, text2);
    printf("you entered %d %d %s", x, y, text2);
    return 0;
}