#include<stdio.h>
int main()
{
    //Declare Multiple Variables
    int x = 23, y = 32, z = 12;
    //printing multiple value
    printf("Values %d %d %d\n", x, y, z);
    //printing multiple sum value
    printf("Sum value %d\n\n", x+y+z);

    //also assgin the same value to multiple variables of the same type
    int x1, y1,z1;
    x1 = y1 = z1 = 23;
    // printing this assign value
    printf("The value is %d %d %d\n", x1, y1, z1);

    return 0;
}
