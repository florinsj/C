// Learning C
// Florin S

// variables //
// Learning C
// Florin S

// variables //

// variable = a name of a memory location
//          = it can store data. It's value can be changed and reused many times

// static variables <==> declared with static keyword     --- ex : static int x=3;
//                  <==> it retains the value between multiple function calls
#include <stdio.h>
void function1();

int y = 1; // global variable

int main()
{

    function1();
    function1();
    function1();
}

void function1()
{
    int x = 1; // local variable

    static int j = 1; // static variable
    x += 1;
    j += 1;
    printf("\nx=%d\n", x);
    printf("j=%d\n", j);
}