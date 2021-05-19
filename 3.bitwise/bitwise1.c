// Learning C
// Florin S

// Bitwise operators  & (and)   |(or)   ^(exclusive or)
#include <stdio.h>
int main()
{

    int a = 6, b = 14;

    // bitwise AND
    printf("the output of the Bitwise AND operator a&b is %d", a & b);

    // bitwise OR
    printf("\nthe output of the Bitwise OR operator a|b is %d", a | b);

    // bitwise exclusive OR   -->   ^
    printf("\nthe output of the Bitwise exclusive OR operator a^b is %d", a ^ b);

    return 0;
}