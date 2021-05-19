// Learning C
// Florin S

// if-else-if statement
// when possible if-else-if statements is preferred over nested if statements
#include <stdio.h>
int main()
{
    int score = 89;

    if (score >= 90)
        printf("%s", "Top 10% \n");
    else if (score >= 80)
        printf("%s", "Top 20% \n");
    else if (score >= 75)
        printf("%s", "You passed\n");
    else
        printf("%s", "You didn't pass\n");

    return 0;
}