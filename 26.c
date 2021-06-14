#include <stdio.h>                      //summation of digits using recursion
int sumofdigits(int num)
{
    int sum=0;
    while (num>0)
    {
        int dig=num%10;
        sum+= dig;
        num=num/10;
    }
    return sum;
    
}
int main()
{
    int a;
    scanf("%d",&a);
    printf("%d\n",sumofdigits(a));
}