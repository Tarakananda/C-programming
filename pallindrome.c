#include <stdio.h>
int main()
{
    int n,i,sum=0,r;
    scanf("%d",&n);
    i=n;
    while(n>0)
    {
        r=n%10;
        sum=(sum*10)+r;
        n=n/10;
    }
    if (i==sum)
    {
        printf("num is a pallindrome\n");
    }
    else
    {
        printf("num is not a pallindrome\n");
    }
}