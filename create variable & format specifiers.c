#include<stdio.h>
int main()
{
    int num =10; //declared variable integer and also added value
    float num2 = 23.55; // declared variable floating and also added value
    char ch = 'A'; // declared variable character type and also added value
    printf("My number is %d & my second number is %f at last my character is %c\n", num, num2, ch);// printing integer n umber floating number an character
    printf("My first number is a %d\n", num);
    printf("My second number is a %f\n", num2);
    printf("My character is a %c\n\n", ch);

    // without variable number or character print
    printf("Without variable print number or character!\n");
    printf("My number is a %d\n", 10);
    printf("My another number is a %f\n", 23.55);
    printf("My character is a %c\n", 'A');

    return 0;
}
