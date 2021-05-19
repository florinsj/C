// Learning C
// Florin S

// continue statement
// continue statement brings the control of the begining of the loop
// continue statement skip current iteration and continue with the next iteration

#include <stdio.h>
void main()
{
    int i = 0;
    while (i != 10)
    {
        printf("\n%d", i);
        continue; //infinite loop because i never change his value
        i++;
    }
}