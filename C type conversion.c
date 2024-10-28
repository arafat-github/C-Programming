#include<stdio.h>
int main()
{
    /*There are two types of conversion in C:

        Implicit Conversion (automatically)
        Explicit Conversion (manually)*/
    //Explicit Conversion

    int num1 = 12, num2 = 5;
    float sum = (float) num1 / num2;
    printf("sum = %.2f\n\n", sum);

    /*Real life example : Here's a real-life example
    of data types and type conversion where we create
    a program to calculate the percentage of a user's
    score in relation to the maximum score in a game*/

    int userValue = 43;
    int maxValue = 90;

    float percentage = (float) userValue / maxValue * 100.0;

    printf("The percentage is = %.2f\n", percentage);

    return 0;

}
