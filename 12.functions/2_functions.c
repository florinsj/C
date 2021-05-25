// Learning C
// Florin S

// functions

// 1.function must be declared globaly,
// 2.function call can be done from everywhere in the program
// 3.function definition --> contains function body= statements to be executed

// syntax  returnType functionName(dataType parameters...) { function body}
// two types of function : 1.Library functions (scanf(),printf() etc)  2.user-defined functions

// example -- function without argument and no return value

#include <stdio.h>
void sum();
void main()
{

    printf("\nGoing to calculate the sum of two numbers:");
    sum();
}

void sum()
{
    int a, b;
    printf("\nEnter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("\nThe sum is: %d ", a + b);
}