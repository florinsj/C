#include <stdio.h>
int main()
{
    //we can define string as a set of characters ,
    //in this case we must add the NULL character explicitly

    //as an any array ,the name of a string acts as a pointer

    char str3[6] = {'h', 'e', 'l', 'l', 'o', '\0'}; //size is 6
    char str4[] = {'h', 'e', 'l', 'l', 'o', '\0'};  //size is 6

    printf("str3 is %s, str4 is %s", str3, str4);
    return 0;
}