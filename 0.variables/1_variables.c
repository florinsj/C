// Learning C
// Florin S

// variables //

// variable = a name of a memory location
//          = it can store data. It's value can be changed and reused many times

// syntax :   dataType variableList;  --> int a; float b; char c;

// valid variable names : int a ;   int _ab;    int a30;

// !! invalid variable names:   int 2;  int a b;    int long;

// types of variables :
// 1.local variables
// 2.global variables
// 3.static variables
// 4.automatic variables
// 5.External variables

// 1.local variables <==> variables declared inside a function or a block
//                   <==> must be initialized before used

// 2.global variables <==> variables declared outside block or outside a function.
//                    <==>  Can be changed by any function.It is available to any function

// 3.static variables <==> declared with static keyword     --- ex : static int x=3;
//                    <==> it retains the value between multiple function calls

// 4.automatic variables <==> all variable declared in a block are explicitly automatic
//                       <==> can be declared explicitly with "auto" keyword

// 5.external variables <==> variable shared in multiple source files
//                      <==> declared with "extern" keyword
//                      <==> declared in another .h file wich will pe included in our file
