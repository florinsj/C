// Variable scope

// Variable scope refers to visibility of variables whithin program

// local variables  --> visibility in block or function -- not available outside block/function

// global variables -->variables declared outside all functions. visibility in entire program

// constants declared with #define at the top of program --> visibility in entire program

// static variables --> local scope , but is not destroyed when function is exited.
//                  --> static variable retains its value for the life of the program and can be
//                      accesed every time the function is re-entered

#include <stdio.h>

int global1 = 0;

int main()
{
    int local1, local2;
    local1 = 5;
    local2 = 10;
    global1 = local1 + local2;
    printf("%d\n", global1);
}