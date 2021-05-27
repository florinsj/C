// Learning C
// Florin S

// variables //
// Learning C
// Florin S

// variables //

// variable = a name of a memory location
//          = it can store data. It's value can be changed and reused many times

// global variables <==> variables declared outside block or outside a function.
//                  <==>  Can be changed by any function.It is available to any function
void function1();

int y = 1; // global variable

int main()
{

    function1();
}

void function1()
{
    int x = 1; //local variable
    printf("x=%d", x);
}