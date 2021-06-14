#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    double a = 0;
    double b = 0;
    double c = 0;
    for (int i=0 ;i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i=0; i<n; i++)
    {
        if (arr[i]>0)
        {
            a++;
        }
        else if (arr[i]==0)
        {
            b++;
        }
        else
        {
            c++;
        }
    }
    printf("%lf %lf %lf",a/n,b/n,c/n);

}