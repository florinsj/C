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

// array example - array sorting  -- bubble sort algoritm
#include <stdio.h>
int main()
{
    int i, j, temp;

    int a[10] = {10, 9, 7, 100, 40, 50, 43, 22, 11, 32}; //array declaration + initialization

    for (i = 0; i < 10; i++)
    {

        for (j = i + 1; j < 10; j++)
        {
            if (a[j] < a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}