#include <stdio.h>
int main()
{
    int n,k;
    scanf("%d",&n);
    int arr[n];
    int sum;
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n;i++)
    {
        if (arr[n - 1] == arr[n - i - 3])
            {
                if (arr[n - 1] == arr[n - i - 2])
                {
                    sum;
                }
            }
        sum++;
    }
    printf("%d", sum);
}