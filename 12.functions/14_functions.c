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
// the value of parameters cannot be changed by function --> function work with a copy of variable

// call by reference :
// the address of the variable is passed to the function  as actual parameter
// the value of the actual parameters can be changed since the function work with the adress of var
// all the operations work with value stored at the address of the actual parameters

// example --call by reference -- change value of number

#include <stdio.h>
void change(int *num);
int main()
{
    int x = 100;
    printf("Before change() call the value of x=%d\n", x);
    printf("change() call...\n");

    change(&x); //call by reference (passing reference in function)
    printf("After change() call the value of x=%d\n", x);

    return 0;
}

void change(int *num)
{
    printf("Before adding value inside the function parameter=%d\n", *num);
    (*num) += 100;

    printf("After adding value inside the function parameter=%d\n", *num);
}