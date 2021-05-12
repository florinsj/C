// Learning C
// Florin S

//do while  loop
// a menu with 3 choiches

#include <stdio.h>
#include <stdlib.h>

void main()
{

    char c;
    int choice, dummy;
    do
    {
        printf("\n1.Print Hello\n2.Print Java\n3.Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Hello");
            break;
        case 2:
            printf("Java");
            break;
        case 3:
            printf("Exit");
            break;
        default:
            printf("\nPlease enter a valid choice");
        }

        printf("\nDo you want to enter more ?");
        scanf("%d", &dummy);
        scanf("%c", &c);

    } while (c == 'y');
}