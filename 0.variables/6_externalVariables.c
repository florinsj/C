// Learning C
// Florin S

// variables //
// Learning C
// Florin S

// variables //

// variable = a name of a memory location
//          = it can store data. It's value can be changed and reused many times

// external variables <==> variable shared in multiple source files
//                    <==> declared with "extern" keyword
//                    <==> declared in another .h file wich will pe included in our file

#include <stdio.h>
#include "myfile.h"
// this is another file wich contains declaration and initialization of external variables

int main()
{
    printf("The value of external variable is: %d", x);
}