// Learning C
// Florin S

// functions

// 1.function must be declared globaly,
// 2.function call can be done from everywhere in the program
// 3.function definition --> contains function body= statements to be executed

// syntax  returnType functionName(dataType parameters...) { function body}
// two types of function : 1.Library functions (scanf(),printf() etc)  2.user-defined functions

// example -- calculate area of a square

#include <stdio.h>
float square();
void main()
{
    printf("\nGoing to calculate the area of a square..");
    float area = square();
    printf("The area of square is: %f", area);
}

float square()
{
    float side;
    printf("\nEnter the side of square: ");
    scanf("%f", &side);
    return (side * side);
}