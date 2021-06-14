#include <stdio.h>                          //nCr value
int main()
{
    int n,r,i,a,b,c,g,f;
    int fact=1;
    int d=1;
    int e=1;
    scanf("%d\n%d",&n,&r);
        for(i=n;i>0;i--)
        {
            fact=fact*i;
        }
        a = n - r;
        printf("%d\n",a);
        for (b = a; b > 0; b--)
        {
            d = d * b;
        }
        for (c = r; c > 0; c--)
        {
            e = e * c;
        }
        f=d*e;
        g = fact / f;
        printf("%d\n", g);
}