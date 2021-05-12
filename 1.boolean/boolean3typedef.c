// Learning C
// Florin S

// In C we don't have a native type for boolean
// in C   1 means true and 0 means false

// define an enum with 2 values : true and false

#include <stdio.h>
typedef enum
{
    false,
    true
} b; // assign a name to an existing datatype

int main()
{

    b x = false;
    if (x == true)
    {
        printf("the value of x is true");
    }
    else
    {
        printf("the value of x is false");
    }

    return 0;
}
