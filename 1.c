//write a sample example of the for loop making the remainder to multiply with the devisor and the divide it again

#include <stdio.h>                                             /*(a^n)%c*/              

int main()
{
    long long int a,n,c,d,i;
    d=1;
    scanf("%lld %lld %lld",&a,&n,&c);
    for (i=1;i<=n;i++)
    {
        d=(d*a)%c;
    }
    printf("%lld\n",d);
}