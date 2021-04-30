#include <stdio.h>

int main()
{
    int x = 5;
    int y;
    int *p = NULL;
    p = &x;

    y = *p + 2; //y =value of p pointing to +2 =5+2=7
    y += *p;    // y=y+ value of p pointing to 5   y=7+5=12
    *p = y;     // x=12 because *p =value of variable wich p is pointing to
    (*p)++;     // x++ => x=13;
    printf("p is pointing to value of %d\n", *p);
}