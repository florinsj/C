// Learning C
// Florin S

// static variable in a function , remain in memory after function execution
// example without static variable

#include <stdio.h>

int main()
{

    printf("%d", func());
    printf("\n%d", func());

    //after func() is executed , the count varible is removed from memory

    return 0;
}
int func()
{
    int count = 0;
    count++;
    return count;
}
