// Learning C
// Florin S

// nested while loop
#include <stdio.h>
int main()
{
    int rows = 0;
    int columns = 0;
    int k = 1;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("\nEnter the number of columns: ");
    scanf("%d", &columns);

    int a[rows][columns];
    int i = 1;
    while (i <= rows) //outer loop
    {
        int j = 1;
        while (j <= columns) //inner loop

        {
            printf("%d\t", k);
            k++;
            j++;
        }
        i++;
        printf("\n");
    }

    return 0;
}