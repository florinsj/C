// Learning C
// Florin S

// conditional (ternar) operator
#include <stdio.h>
int main()
{

    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    //conditional(ternar) operator
    (age > 18) ? (printf("Eligible for voting!")) : (printf("not eligible vor voting!"));

    return 0;
}