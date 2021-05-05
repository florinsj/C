// Learning C
// Florin S

// Bitwise two's complement
// two's complement =one's complement +1
// 1+0=1; 0+1=1; 0+0=0; 1+1=0 with carry=1;

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of bits do you want to enter: ");
    scanf("%d", &n);
    char binary[n + 1];
    char onescomplement[n + 1];
    char twoscomplement[n + 1];
    int carry = 1;
    printf("\nEnter the binary number: ");
    scanf("%s", binary);
    printf("Your binary number is %s", binary);

    //finding one's complement

    printf("\nThe one's complement of the binary number is: ");
    int i;
    for (i = 0; i < n; i++)
    {

        if (binary[i] == '0')
        {
            onescomplement[i] = '1';
        }
        else if (binary[i] == '1')
        {
            onescomplement[i] = '0';
        }
    }
    onescomplement[n] = '\0';
    printf("%s", onescomplement);

    //finding two's complement

    for (i = n - 1; i >= 0; i--)
    {
        if (onescomplement[i] == '1' && carry == 1)
        {
            twoscomplement[i] = '0';
        }
        else if (onescomplement[i] == '0' && carry == 1)
        {
            twoscomplement[i] = '1';
            carry = 0;
        }
        else
        {
            //in this case means that carry=0;
            twoscomplement[i] = onescomplement[i];
        }
    }
    twoscomplement[n] = '\0'; //end of string

    printf("\n The two's complement is: %s", twoscomplement);

    return 0;
}