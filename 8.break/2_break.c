// Learning C
// Florin S

// break statement
// break with switch

#include <stdio.h>
int main()
{
    int number = 0;

    printf("Enter a number: ");
    scanf("%d", &number);
    switch (number)
    {
    case 10:
        printf("Your number is 10");
        break;
    case 20:
        printf("Your number is 20");
        break;

    default:
        printf("Your number is different of 10 or 20!!");
    }

    return 0;
}
