#include<stdio.h>
int main()
{
    /* If you don't want others (or yourself) to change existing variable values, you can use the const keyword.
    This will declare the variable as "constant", which means unchangeable and read-only:*/

    const int num = 12; // fix value is 12

    num = 23; // error

    // printing the fix number
    printf("The num is %d\n", num);



    return 0;
}
