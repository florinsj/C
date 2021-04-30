#include <stdio.h>
int main()
{
    char str1[6] = "hello"; // automaticaly the NULL character "\0"
                            //will be added wich means the end of string
    char str2[] = "world";  // size is 6 because "\0" will be added automaticaly

    printf("str1 is %s, str2 is %s", str1, str2);
    return 0;
}