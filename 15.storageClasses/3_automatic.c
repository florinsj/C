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

// automatic variables
// storage= Ram ,defaultValue= garbageValue, scope= Local(in block), lifetime= within the function
// keyword for define automatic variables -->  "auto"
// allocated memory automatically at runtime
// every local variable= automatic by default in C

// example - automatic variable

#include <stdio.h>
int main()
{

    int a = 10, i;
    printf("%d ", ++a); // will print 11

    {
        int a = 20;
        for (i = 0; i < 3; i++)
        {
            printf("%d ", a); // will print 20 , 3 times
        }
    }

    printf("%d ", a); // will print 11
}