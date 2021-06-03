// Learning C
// Florin Stanciu

/*  Storage classes are used to determine the lifetime, visibility,memory location and 
initial value of a variable.

4 types of storage classes in C :

    automatic
    external
    static 
    register

*/

// static  variables
// storage= Ram, defaultValue= 0, scope= Local(in block where funtion where defined),
// visibility of global static variable= file where the var was declared
// lifetime= till the end of the main program, retains value between multiple function calls
// keyword for define static variables -->  "static"
// same static var can be declared many times but assingned only one time
// allocated memory automatically at runtime
// every local variable= automatic by default in C

// example - static variable
#include <stdio.h>
void sum()
{
    static int a = 10;
    static int b = 24;
    printf("%d %d\n", a, b);
    a++;
    b++;
}
void main()
{
    int i;
    for (i = 0; i < 3; i++)
    {
        sum(); //the static varibles from sum() holds their value between multiple calls
    }
}
