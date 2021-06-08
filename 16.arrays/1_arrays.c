// Learning C
// Florin Stanciu

// Arrays
//        = collection of similar type od data items stored at continous memory locations
//        = can store primitive of data such as int, char, double, float etc
//        = can store colllection of derived data types(pointers, structures, etc)

// each element of the array is of the same data type and have same size
// elements of array are stored at continous memory locations,

// first element  stored at smallest memory location
// elements of array can be randomly accesed (we calculate the address or by index)

// Advantages   - code optimization
//              - ease of traversing (very easy using a for loop)
//              - ease of sorting  (few lines of code)
//              - random acces

// Disadvantages
//              - fixed size defined at the time of declaration

// sintax  :  dataType arrayName[arraySize]     ex: int numbers[5];

// array example
#include <stdio.h>
int main()
{
    int i = 0;

    int marks[5]; //array declaration

    marks[0] = 60; // array initialization
    marks[1] = 70;
    marks[2] = 90;
    marks[3] = 75;
    marks[4] = 80;

    // array traversal
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", marks[i]);
    }
    return 0;
}