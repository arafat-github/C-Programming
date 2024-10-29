#include<stdio.h>
int main()
{
    int n1=2, n2= 3, num;
    //num = n1 > n2 ? n1 : n2;
    if(n1>n2)
    {
        num = n1;
    }
    else
    {
        num = n2;
    }
    printf("Num = %d\n", num);

    getch();


}
