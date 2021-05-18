#include <stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    i=0;
    for (i;i<=n;i++)
    {
        for (j=0;j<=n;j++)
        {
            if (j<(n/2-i))
            {
                printf(" ");
            }
            else
            {
                printf("%d",1);
            }
        }
        printf("\n");

    }
}