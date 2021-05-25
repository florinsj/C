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
void change(int);
int main()
{
    int x = 100;
    printf("Before function call x=%d\n", x);
    printf("Calling the function..\n");
    change(x); // passing value in function
    printf("After function call x=%d\n", x);
    return 0;
}

void change(int num)
{
    printf("Before adding value inside function num=%d\n", num);
    num += 100;
    printf("After adding value inside function num=%d\n", num);
}