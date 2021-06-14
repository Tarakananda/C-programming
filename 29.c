#include <stdio.h>                  //recursion method
#include <math.h>
float king(double a,double b)
{
    int i;
    int j;
    int sum=1;
    for (i=a;i>0;i--)
    {
        for (j=b;j>0;j--)
            sum=sum*i;
        return(sum);
    }
}
int main()
{
    int a;
    int b;
    scanf("%d%d",&a,&b);
    printf("%lf\n",king(a,b));
}