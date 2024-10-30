#include<stdio.h>
int main()
{
    int time = 10;
    // short system of if else
    // variable = (condition) ? expressionTrue : expresssionFalse;
    (time < 12) ? printf("Good day!\n") : printf("Good evening.\n");
    //long system of if else
    if(time <= 10)
    {
        printf("Good Morning\n");
    }
    else if(time <= 4)
    {
        printf("Good Afternoon\n");
    }
    else
    {
        printf("Good Evening\n");
    }

    //Real life example : Find out if a number even or odd
    int number = 4;
    if(number % 2 == 0)
    {
        printf("%d is even number\n", number);
    }
    else
    {
        printf("%d is odd number\n", number);
    }

    return 0;
}
