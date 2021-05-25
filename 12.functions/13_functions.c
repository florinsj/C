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
void swap(int, int);
int main()
{
    int a = 10;
    int b = 20;
    printf("Before swapping the values in main are a=%d, b=%d\n", a, b);
    printf("Swapping...\n");

    swap(a, b); //call by value
    printf("After swapping the values in main are a:%d, b=%d\n", a, b);

    return 0;
}

void swap(int a, int b)
{

    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("After swapping, values in function a=%d, b=%d\n", a, b);
}