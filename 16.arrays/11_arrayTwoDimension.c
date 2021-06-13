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

// sintax   :  dataType arrayName[arraySize]     ex: int numbers[5];

// Two dimensional Array    - array of arrays (similar to a table or a grid of chess board)
//                          - 2D arrays is organized as matrices = colection of rows and column
//                          - declaration of two dimens. array indicates the value for col and rows

// sintax   : dataType arrayName[rows][columns]     ex: int numbers[5][5];

// Multidimensional arrays  - array with more than two dimension
//                          - example : int a[5][6][4]

// example : two dimensional array -- accesing some elements in two dimensional array

#include <stdio.h>
int main()
{
    int a[2][3] = {{3, 2, 6}, {4, 5, 20}};
    printf("Element 3 in row 2 is %d\n", a[1][2]);
    a[1][2] = 25;
    printf("Element 3 in row 2 is %d\n", a[1][2]);
    return 0;
}