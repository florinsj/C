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

// array example - traversing array
#include <stdio.h>
int main()
{
    int a[10];
    int k;
    for (k = 0; k < 10; k++) // assign value to each item in array
    {
        a[k] = k * 10;
    }
    for (k = 0; k < 10; k++) // traversing array
    {
        printf("%d\n", a[k]);
    }

    return 0;
}