#include<stdio.h>
int main()
{
    // int     -- 2 0r 4bytes
    // float   -- 4 bytes
    // double  -- 8 bytes
    // char    -- 1 bytes
    int myint;
    float myfloat;
    double mydouble;
    char mychar;

    // printing the all data type size
    printf("The int size is %lu\n", sizeof(myint));
    printf("The float size is %lu\n", sizeof(myfloat));
    printf("The double size is %lu\n", sizeof(mydouble));
    printf("The size is %lu\n", sizeof(mychar));

    return 0;
}
