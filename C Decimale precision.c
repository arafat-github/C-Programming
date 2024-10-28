#include<stdio.h>
int main()
{
    float floatNumber = 23.433;
    double doubleNumber = 234.42342;

    printf("%f\n", floatNumber);// the output shown after decimal point six
    printf("%.11lf\n", doubleNumber);// the output shown after decimal point 1
    printf("%.2f\n", floatNumber);// the output shown after decimal point 2
    printf("%.3lf\n", doubleNumber);// the output shown after decimal point 3

    return 0;
}
