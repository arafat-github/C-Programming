#include<stdio.h>
int main()
{
    //Arithmetic operator
    printf("Arithmetic Operator\n");
    int num1= 23;
    int sum1 = num1 + 234;
    int sum2 = sum1 + num1;
    printf("The number is %d\n", num1);
    printf("The first sum is %d\n", sum1);
    printf("The second sum is %d\n\n", sum2);

    // Assignment operators
    printf("Assignment Operator\n");
    int num2 = 2334;
    int sum = num2 + 3432;
    printf("The sum is = %d\n\n", sum);// used = operator

    // Comparison operators
    printf("Comparison operators\n");
    int num3 = 34, num4 = 23, compare;
    compare = num3 > num4 ? num3 : num4;
    /*if (num3 > num4)
    {
        compare = num3;
    }
    else
    {
        compare = num4;
    }*/
    printf("comparison = %d\n\n", compare);

    // Logical operator
    printf("Logical Operator\n");
    int num=5,num6;
    if(num > num6)
    {
        printf("higer number is = %d\n", num6);
    }
    else if(num < num6)
    {
        printf("Higher number is = %d\n", num);
    }
    else
    {
        printf("Equal");
    }

}
