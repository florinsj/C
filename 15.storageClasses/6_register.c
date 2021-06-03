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

// register  variables
// storage= Register, defaultValue= 0(system dependent), scope= Local(in block or funtion where defined),
// lifetime= within the function
// allocated in the CPU registers
// acces is faster than automatic variables
// keyword for define register variables -->  "register"
// we can store pointers to register variables
// !! static var cannot be stored in registers
// !! cannot acces the address of a register

// example - register variable

#include <stdio.h>
int main()
{
    register int a; // register varible --> allocated in the CPU register.initial value=0
    printf("%d", a);
    return 0;
}