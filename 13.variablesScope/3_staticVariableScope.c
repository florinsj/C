// Variable scope

// Variable scope refers to visibility of variables whithin program

// local variables  --> visibility in block or function -- not available outside block/function

// global variables -->variables declared outside all functions. visibility in entire program

// constants declared with #define at the top of program --> visibility in entire program

// static variables --> local scope , but is not destroyed when function is exited.
//                  --> static variable retains its value for the life of the program and can be
//                      accesed every time the function is re-entered

// example  : static

#include <stdio.h>
void sayHello();
int main()
{
    int i;
    for (i = 0; i < 5; i++)
    {
        sayHello();
    }
    return 0;
}

void sayHello()
{
    static int numCalls = 1;
    printf("Hello number %d\n", numCalls);
    numCalls++;
}