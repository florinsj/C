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

// array example - print the largest and second item of the array
void main()
{
    int arr[100], i, n, largest, secondLargest;
    printf("Enter the size of the array?");
    scanf("%d", &n);
    printf("Enter the elements of array:");
    for (i = 0; i < n; i++)
    {
        scanf("%d ", &arr[i]);
    }
    largest = arr[0];
    secondLargest = arr[1];
    for (i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }
    printf("largest= %d, second= %d", largest, secondLargest);
}
