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

// external variables
// storage= RAM, defaultValue= 0(system dependent), scope= Global,
// lifetime= till the end of the main program, can be declared anywhere in program

// declared with an external linkage

// keyword for define extern variables -->  "extern"

// varibles declared as extern are not allocated any memory.
// the declaration specify that the variable is declared elsewhere in program

// external variable can be declare many times but initialized just one time
// if a variale is declared extern, compier search for initialization of the  variable
// initialization can be extern or static
// if no initialization -- > error

// example - extern variable

#include <stdio.h>
int main()
{
    extern int a;
    printf("%d", a); // compiler will search for initialization of a
}
int a = 20;