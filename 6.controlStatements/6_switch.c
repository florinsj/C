// Learning C
// Florin S

// switch-case statement
// multiple cases with unique labels
#include <stdio.h>
int main()
{

    int num = 3;
    switch (num)
    {

    case 1:
    case 2:
    case 3:
        printf("One,Two or Three\n");
        break;
    case 4:
    case 5:
    case 6:
        printf("Four,Five or Six\n");
        break;
    default:
        printf("Greater than Six\n");
    }
    return 0;
}