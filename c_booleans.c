#include<stdio.h>
#include <stdbool.h>
int main()
{
    bool programmingLetter = true;
    bool notProgrammingRelated = false;

    printf("%d\n", programmingLetter);
    printf("%d\n", notProgrammingRelated);

    bool programminIsNot = false;
    bool programminIsReallyNice = true;

    printf("%d\n", programminIsNot);
    printf("%d\n", programminIsReallyNice);

    int n1 = 1, n2 = 3;
    printf("Comparing %d\n\n", n1 > n2);


    // Real life example
    int myAge = 17;
    int votingAge = 15;

    printf("The comparing = %d\n", myAge >= votingAge);

    // if else check this vote old or equal
    if(myAge >= votingAge)
    {
        printf("Old enough to vote\n");
    }
    else
    {
        printf("Not old enough to vote");
    }

    getch();

}
