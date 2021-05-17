#include <stdio.h>
int main()
{
    int i,j,a,b;
    scanf("%d %d",&a,&b);
    int arr[a][b];
    for (i=0;i< a;i++)
    {
        for ( j = 0; j < b; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("output\n");
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            printf("%d  ", arr[i][j]);
        }
    printf("\n");
    }
}