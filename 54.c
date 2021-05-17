#include <stdio.h>
double getavarage(int arr[], int n)
{
    int i;
    double sum=0;
    for (i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    sum=sum/n;
    return sum;

}
int main()
{
    int arr[]={1,2,3,4,5,6};
    double ans=getavarage(arr,6);
    printf("%f\n",ans);
}