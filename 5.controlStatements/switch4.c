// Learning C
// Florin S

// nested switch case statements
#include <stdio.h>
int main()
{

    int i = 10;
    int j = 20;

    switch (i)
    {
    case 10:
        printf("The value of i evaluated in outer switch is %d", i);

    case 20:
        switch (j)
        case 20:
            printf("\nThe value of j evaluated in inner switch is %d", j);
    }
    printf("\nThe value of i is %d ", i);
    printf("\nThe value of j is %d", j);
    return 0;
}