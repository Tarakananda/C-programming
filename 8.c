#include <stdio.h>                    //loop concept
int main()
{
    int i,j;
    for (i=1;i<=9;i++)
    {
        for (j =1; j <= i; j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
}