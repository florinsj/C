// Learning C
// Florin S

// variables //
// Learning C
// Florin S

// variables //

// variable = a name of a memory location
//          = it can store data. It's value can be changed and reused many times

// local variables <==> variables declared inside a function or a block
//                 <==> must be initialized before used

void function1();

int main()
{
    function1();
}

void function1()
{
    int x = 1; //local variable
    printf("x=%d", x);
}