#include <stdio.h>
int main()
{
    long long int x;
    int i;
    int sum=0;
    scanf("%lld",&x);
    for (i=5;i>0;i--)
    {
        sum=sum+x/i;
        x=x%i;
        
    }
    printf("%d",sum);
    
}