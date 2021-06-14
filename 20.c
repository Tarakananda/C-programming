#include <stdio.h>                          //recursion example
int summation (int a, int b)
{
    return a+b;
}
int main()
{
    int a1=10;
    int b1=20;
    int sum = summation(a1,b1);
    printf("sum of two numbers %d\n",sum);
}