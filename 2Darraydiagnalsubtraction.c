//write a program of a 2D array daigonal subtraction

#include <stdio.h>

int main()
{
    int n;
    int k;
    scanf("%d",&n);
    int sum=0;
    int diff=0;
    int arr1[n][n], i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if(i==j)
            {
                sum+=arr1[i][j];
                diff = diff + arr1[i][n - i - 1];
            }
        }
    }
    k=sum-diff;
    while (k<0)
    {
        k=-k;
    }
    printf("%d",k);
}