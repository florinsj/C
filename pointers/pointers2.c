#include <stdio.h>

int main()
{

    int j = 63;
    int *p = NULL; //initializare pointer
    p = &j;

    printf("The address of j is %x\n", &j);
    printf("p contains address %x\n", p);
    printf("The value of j is %d\n", j);
    printf("p is pointing to value %d\n", *p);
}