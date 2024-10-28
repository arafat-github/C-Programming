#include<stdio.h>
int main()
{
    int num =12;
    num = 23; // now 23 is a real value of num variable

    // print that number
    printf("The number is a %d now\n", num);

    int n = 20, n2 = 33;
    n2 = n; // now n2 value is 20

    //print that numbert
    printf("The number is a %d\n", n2);

    int n3 = 44, n4; //now n4 equal empty
    n4 = n3; // now n4 equal 44

    //print that number
    printf("The number is %d\n", n4);

    int num1 = 32, num2 = 22, sum;
    num2 = num1;
    num1 = num2;
    sum = num1 + num2;

    //print sum
    printf("The sum is a %d\n", sum);
    return 0;

}
