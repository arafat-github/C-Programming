#include<stdio.h>
int main()
{
    //here's a real life examples of using different data types, to calculate and input the total cost of a number of items:
    int items = 70;
    float cost_per = 15.66;
    float total_cost = items * cost_per;
    char currency = '$';

    // printin variable
    printf("Number of items: %d\n", items);
    printf("Number of cost per: %.2f\n", cost_per);
    printf("Number of total cost: %.2f%c", total_cost, currency);

    return 0;
}
