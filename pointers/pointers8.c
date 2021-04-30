#include <stdio.h>

// a function  can return a pointer to an array

int *get_evens(); //return a pointer to an array of int

int main()
{
    int *a;
    int k;
    a = get_evens(); // get first 5 even numbers in array

    for (k = 0; k < 5; k++)
    {
        printf("%d\n", a[k]);
    }

    // a[k] is same with *(a+k)
    for (k = 0; k < 5; k++)
    {
        printf("%d\n", *(a + k));
    }

    return 0;
}

int *get_evens()
{
    static int nums[5]; /// when a local variable need to be passed out a function ,declare as static

    int k;
    int even = 0;

    for (k = 0; k < 5; k++)
    {
        nums[k] = even += 2;
    }
    return (nums);
}
