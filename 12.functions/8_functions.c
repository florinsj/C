// Learning C
// Florin S

// functions

// 1.function must be declared globaly,
// 2.function call can be done from everywhere in the program
// 3.function definition --> contains function body= statements to be executed

// syntax  returnType functionName(dataType parameters...) { function body}
// two types of function : 1.Library functions (scanf(),printf() etc)  2.user-defined functions

// example -- check whether a number is even or odd
#include <stdio.h>
int even_odd(int);
void main()
{
    int n, flag = 0;
    printf("\nGoing to check whether a number is even or odd...");
    printf("\nEnter the number:");
    scanf("%d", &n);
    flag = even_odd(n);
    if (flag == 0)
        printf("The number is odd!");

    else
        printf("The number is even!");
}
int even_odd(int n)
{
    if (n % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}