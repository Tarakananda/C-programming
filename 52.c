#include <stdio.h>
double average(int arr[],int n)
{
    int i;
    int sum=0;
    double avg;
    for (i=0;i<n;++i)
    {
        sum=sum+arr[i];
    }
    avg= 1.0*sum/n;
    return avg;
}
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    int arr[n];
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    double avg = average(arr,n);
    printf("%f",avg);
}