// Learning C
// Florin S

// functions

// 1.function must be declared globaly,
// 2.function call can be done from everywhere in the program
// 3.function definition --> contains function body= statements to be executed

// syntax  returnType functionName(dataType parameters...) { function body}
// two types of function : 1.Library functions (scanf(),printf() etc)  2.user-defined functions

// two types of call : call by value , call by reference

// call by value:
// arguments are passed by value ==>a copy of data is given to the parameters of the called function
// the value of variable cannot be changed by function --> function work with a copy of variable

//example --call by value--parameters passed by value

#include <stdio.h>
int sum_up(int x, int y);
int main()
{
    int x, y, result;
    x = 3;
    y = 12;
    result = sum_up(x, y);
    printf("%d + %d = %d", x, y, result);
    printf("\nAfter sum_up() call x=%d, y=%d", x, y);

    return 0;
}
int sum_up(int x, int y)
{
    x += y;
    return x;
}