#include <stdio.h>
int main()
{
    int n;
    int i;
    int h,a;
    int sum=0;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        scanf("%d %d",&h,&a);
        if (h==a)
        {
            sum=sum+1;
        }
    }
    
    printf("%d",sum);
}