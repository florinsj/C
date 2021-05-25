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

void printName(); // global delaration

void main()
{
    printf("Hello ");
    printName(); // function call
}

void printName() // function definition
{
    printf("John");
}