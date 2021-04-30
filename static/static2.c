#include <stdio.h>

//with static variable

int main()
{

    printf("%d", func());
    printf("\n%d", func());

    // after each func() execution , the count variable is not deleted fro memory
    //because count is a static variable
    return 0;
}
int func()
{
    static int count = 0;
    count++;
    return count;
}
