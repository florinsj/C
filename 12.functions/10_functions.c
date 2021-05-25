// Learning C
// Florin S

// functions

// 1.function must be declared globaly,
// 2.function call can be done from everywhere in the program
// 3.function definition --> contains function body= statements to be executed

// syntax  returnType functionName(dataType parameters...) { function body}
// two types of function : 1.Library functions (scanf(),printf() etc)  2.user-defined functions

// -- declare a function named "triple" taking an int parameter and returning its value times 3
#include <stdio.h>

int triple(int num);
int main()
{
    int x, result;
    x = 5;
    result = triple(x);
    printf("nThe 3 times of %d is: %d", x, result);
    return 0;
}

int triple(int num)
{
    int result;
    result = num * 3;
    return result;
}