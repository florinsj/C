#include <stdio.h>

int a[10] = {10, 2, 3, 1, 54, 21, 23, 4, 102, 0};
int i, j, aux;

int main()
{
    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (a[i] > a[j])
            {
                aux = a[i];
                a[i] = a[j];
                a[j] = aux;
            }
        }
    }

    for (i = 0; i < 10; i++)
    {
        printf("Sorted array: %d ", a[i]);
    }
    return 0;
}