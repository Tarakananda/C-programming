#include <stdio.h>                  //practice program
int main()
{
    int k,w;
    long long int n;
    scanf("%d %lld %d",&k,&n,&w);
    int i;
    int sum=0;
    for (i=1;i<=w;i++)
    {
        sum+=i*k;
    }
    int amount=sum-n;
    printf("%d\n",amount);
}