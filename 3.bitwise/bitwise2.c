// Learning C
// Florin S

// Bitwise left and right shift operators    <<(left)    >>(right)

#include <stdio.h>
int main()
{

    int a = 5, b = 14;

    // bitwise left -shift operator    <<
    //shitfs the number with number of bits to left
    // ex a=0101  ;  a<<2  ;  a=010100
    printf("\n left shifted %d with 2 bits is  %d", a, a << 2);

    ////////////////////////////////////

        // bitwise right-shift operator    >>
    //shitfs the number with number of bits to right

    //on the right shift  ... the right shifted bits will be popped out
    //the left spaces will pe filled with 0
    // ex a=0101  ;  a>>2  ;  a=0001
    a = 7;
    printf("\n right shifted %d with 2 bits is  %d", a, a >> 2);

    return 0;
}