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

    auto int a; // automatic variable
    //we can skip the keyword "auto"

    char b;  // automatic variable
    float c; // automatic variable

    printf("%d   %c   %f", a, b, c); // will print default values
    return 0;
}