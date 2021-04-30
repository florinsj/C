#include <stdio.h>
void main()
{
    int arr[100], size, i;
    int firstLargest = 0, secondLargest = 0;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    printf("Enter the elements of array: \n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Your array is: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    firstLargest = arr[0];
    secondLargest = arr[1];
    for (i = 0; i < size; i++)
    {
        if (arr[i] > firstLargest)
        {
            secondLargest = firstLargest;
            firstLargest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != firstLargest)
        {
            secondLargest = arr[i];
        }
    }
    printf("First largest is %d and second largest is %d", firstLargest, secondLargest);
}