// Learning C
// Florin S

// variables //
// Learning C
// Florin S

// variables //

// variable = a name of a memory location
//          = it can store data. It's value can be changed and reused many times

// automatic variables <==> all variable declared in a block are explicitly automatic
//                     <==> can be declared explicitly with "auto" keyword

void function1();

int y = 1; // global variable

int main()
{
    int b = 1;       // global variable   --- also automatic variable
    auto int a = 20; // automatic variable

    function1();
    function1();
    function1();
}

void function1()
{
    int x = 1; //local variable

    static int j = 1; // static variable
    x += 1;
    j += 1;
    printf("\nx=%d\n", x);
    printf("j=%d\n", j);
}