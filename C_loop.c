#include<stdio.h>
int main()
{
    //while loop
	int i=0;
    while(i < 5)
    {
        printf("%d\n", i);
        i++;
    }

    //do/while loop
    int o = 0;
    do {
        printf("%d\n\n", o);
        o++;
    }
    while (o < 5);

    // real life example : In this example we use a while loop to reverse some numbers:
    printf("\n\n");
    int numbers = 12345;
    int revNumbers = 0;

    while (numbers){
        revNumbers = revNumbers * 10 + numbers % 10;
        numbers /=10;
    }

    printf("%d", revNumbers);
    return 0;
  }
