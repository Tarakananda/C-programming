#include <stdio.h>
int main()
{
    int a;
    int sum=0;
    scanf("%d",&a);
    while(a>0)
    {
        int digit=a%10;
        sum+= digit;
        a=a/10;
    }
    printf("%d\n",sum);
    
}