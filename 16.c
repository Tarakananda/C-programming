#include <stdio.h>                          //factorial of a number
int main()
{
    int a;
    int i;
    int fact=1;
    scanf("%d",&a);
        for (i=a;i>0;i--)
        {
            fact=fact*i;
        }
    printf("%d\n",fact);
}