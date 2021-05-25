// Learning C
// Florin S

// functions

// 1.function must be declared globaly,
// 2.function call can be done from everywhere in the program
// 3.function definition --> contains function body= statements to be executed

// syntax  returnType functionName(dataType parameters...) { function body}
// two types of function : 1.Library functions (scanf(),printf() etc)  2.user-defined functions

// example -- square of a number

#include <stdio.h>

int square(int num);
int main()
{
    int x, result;
    x = 5;
    result = square(x);
    printf("nThe square of %d is: %d", x, result);
    return 0;
}

int square(int num)
{
    int result;
    result = num * num;
    return result;
}