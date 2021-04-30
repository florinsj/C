#include <stdio.h>

//without static variable

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
