#include <stdio.h>

double factorial(int a)
{
    int i;
    int fact=1;
    for (i=a;i>0;i--)
    {
        fact=fact*i;
    }
    
    return(fact);
}

int main()
{
    int a1;
    scanf("%d",&a1);
    printf("%lf\n",factorial(a1));
}
