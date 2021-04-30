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
