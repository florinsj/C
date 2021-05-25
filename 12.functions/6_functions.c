// Learning C
// Florin S

// functions

// 1.function must be declared globaly,
// 2.function call can be done from everywhere in the program
// 3.function definition --> contains function body= statements to be executed

// syntax  returnType functionName(dataType parameters...) { function body}
// two types of function : 1.Library functions (scanf(),printf() etc)  2.user-defined functions

// example -- calculate the average of five numbers
#include <stdio.h>
void average(int, int, int, int, int);
void main()
{

    int a, b, c, d, e;
    printf("\nGoing to calculate the average of five numbers..");
    printf("\nEneter five numbers:");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    average(a, b, c, d, e);
}

void average(int a, int b, int c, int d, int e)
{
    float avg;
    avg = (a + b + c + d + e) / 5;
    printf("\nThe average of given five number :%f", avg);
}